//Boris Ivan de León Santos
#include "Tablero.h"
#include <sstream>
#include <iostream>

using namespace std;

// Constructor por defecto del tablero
Tablero::Tablero()
{
}

// Constructor que inicializa el tablero con altura, ancho y modo desarrollador
Tablero::Tablero(int alturaTablero, int anchoTablero, bool modoDesarrollador)
{
    this->alturaTablero = alturaTablero;
    this->anchoTablero = anchoTablero;
    this->modoDesarrollador = modoDesarrollador;
    int x, y;
    // Inicializa el contenido del tablero como una matriz de celdas
    for (y = 0; y < this->alturaTablero; y++)
    {
        vector<Celda> fila;
        for (x = 0; x < this->anchoTablero; x++)
        {
            fila.push_back((Celda(x, y, false))); // Agrega una celda vacía
        }
        this->contenidoTablero.push_back(fila); // Agrega la fila al tablero
    }
}

// Retorna la altura del tablero
int Tablero::getAlturaTablero()
{
    return this->alturaTablero;
}

// Establece la altura del tablero
int Tablero::setAlturaTablero(int alturaTablero)
{
    this->alturaTablero = alturaTablero;
}

// Retorna el ancho del tablero
int Tablero::getAnchoTablero()
{
    return this->anchoTablero;
}

// Establece el ancho del tablero
int Tablero::setAnchoTablero(int anchoTablero)
{
    this->anchoTablero = anchoTablero;
}

// Retorna si el modo desarrollador está activado o no
bool Tablero::getModoDesarrollador()
{
    return this->modoDesarrollador;
}

// Activa o desactiva el modo desarrollador
bool Tablero::setModoDesarrollador(bool modoDesarrollador)
{
    this->modoDesarrollador = modoDesarrollador;
}

// Retorna la representación de una celda con mina en la posición (coordenadaX, coordenadaY)
string Tablero::getRepresentacionMina(int coordenadaX, int coordenadaY)
{
    Celda celdaTemporal = this->contenidoTablero.at(coordenadaY).at(coordenadaX);
    // Si la mina está descubierta o estamos en modo desarrollador
    if (celdaTemporal.getMinaDescubierta() || this->modoDesarrollador)
    {
        // Si la celda tiene una mina, se representa con un asterisco
        if (celdaTemporal.getMina())
        {
            return "*";
        }
        else
        {
            // Si la celda no tiene mina, se muestra la cantidad de minas cercanas
            int cantidadCelda = this->minasCercanas(coordenadaY, coordenadaX);
            string cantidadCeldaString = " ";
            stringstream ss;
            ss << cantidadCelda;
            ss >> cantidadCeldaString;
            return cantidadCeldaString;
        }
    }
    else
    {
        // Si la mina no está descubierta, se representa con un signo de interrogación
        return "?";
    }
}

// Cuenta cuántas minas hay cerca de una celda en (filaTablero, columnaTablero)
int Tablero::minasCercanas(int filaTablero, int columnaTablero)
{
    int contadorTablero = 0;
    int filaInicioTablero, filaFinTablero, columnaInicioTablero, columnaFinTablero;

    // Establece los límites de las celdas cercanas
    filaInicioTablero = (filaTablero > 0) ? filaTablero - 1 : 0;
    filaFinTablero = (filaTablero + 1 >= this->alturaTablero) ? this->alturaTablero - 1 : filaTablero + 1;
    columnaInicioTablero = (columnaTablero > 0) ? columnaTablero - 1 : 0;
    columnaFinTablero = (columnaTablero + 1 >= this->anchoTablero) ? this->anchoTablero - 1 : columnaTablero + 1;

    // Recorre las celdas cercanas y cuenta las minas
    for (int m = filaInicioTablero; m <= filaFinTablero; m++)
    {
        for (int l = columnaInicioTablero; l <= columnaFinTablero; l++)
        {
            if (this->contenidoTablero.at(m).at(l).getMina())
            {
                contadorTablero++; // Suma una mina encontrada
            }
        }
    }
    return contadorTablero;
}

// Imprime el separador del encabezado del tablero
void Tablero::imprimirSeparadorEncabezado()
{
    for (int m = 0; m <= this->anchoTablero; m++)
    {
        cout << "----";
        if (m + 2 == this->anchoTablero)
        {
            cout << "-";
        }
    }
    cout << "\n";
}

// Imprime los separadores de filas del tablero
void Tablero::imprimirSeparadorFilas()
{
    for (int m = 0; m <= this->anchoTablero; m++)
    {
        if (m <= 1)
        {
            cout << "|---";
        }
        else
        {
            cout << "+---";
        }
        if (m == this->anchoTablero)
        {
            cout << "+";
        }
    }
    cout << "\n";
}

// Imprime el encabezado del tablero (números de columnas)
void Tablero::imprimirEncabezado()
{
    this->imprimirSeparadorEncabezado();
    cout << "|   ";
    for (int l = 0; l < this->anchoTablero; l++)
    {
        cout << "| " << l + 1 << " ";
        if (l + 1 == this->anchoTablero)
        {
            cout << "|";
        }
    }
    cout << "\n";
}

// Imprime el tablero en pantalla
void Tablero::imprimir()
{
    this->imprimirEncabezado();
    this->imprimirSeparadorEncabezado();
    for (int y = 0; y < this->alturaTablero; y++)
    {
        cout << "| " << y + 1 << " ";
        for (int x = 0; x < this->anchoTablero; x++)
        {
            cout << "| " << this->getRepresentacionMina(x, y) << " ";
            if (x + 1 == this->anchoTablero)
            {
                cout << "|";
            }
        }
        cout << "\n";
        this->imprimirSeparadorFilas();
    }
}

// Coloca una mina en la posición (x, y)
bool Tablero::colocarMina(int x, int y)
{
    return this->contenidoTablero.at(y).at(x).setMina(true);
}

// Descubre una celda del tablero en la posición (x, y)
bool Tablero::descubrirMina(int x, int y)
{
    this->contenidoTablero.at(y).at(x).setMinaDescubierta(true);
    Celda celda = this->contenidoTablero.at(y).at(x);
    // Si la celda tiene una mina, se retorna false
    if (celda.getMina())
    {
        return false;
    }
    return true;
}

// Cuenta cuántas celdas sin minas aún no han sido descubiertas
int Tablero::contarCeldasSinMinasYSinDescubrir()
{
    int contador = 0;
    for (int y = 0; y < this->alturaTablero; y++)
    {
        for (int x = 0; x < this->anchoTablero; x++)
        {
            Celda celdaTemporal = this->contenidoTablero.at(y).at(x);
            // Si la celda no tiene mina y no está descubierta, se suma al contador
            if (!celdaTemporal.getMinaDescubierta() && !celdaTemporal.getMina())
            {
                contador++;
            }
        }
    }
    return contador;
}
