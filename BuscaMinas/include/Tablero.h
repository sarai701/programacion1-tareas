//Boris Ivan de Le�n Santos
#ifndef TABLERO_H
#define TABLERO_H

#include <iostream>
#include <vector>
#include "Celda.h"

using namespace std;

class Tablero {
public:
    // Constructor por defecto del tablero
    Tablero();

    // Constructor que inicializa el tablero con altura, ancho y modo desarrollador
    Tablero(int alturaTablero, int anchoTablero, bool modoDesarrollador);

    // Retorna la altura del tablero
    int getAlturaTablero();

    // Establece la altura del tablero
    int setAlturaTablero(int alturaTablero);

    // Retorna el ancho del tablero
    int getAnchoTablero();

    // Establece el ancho del tablero
    int setAnchoTablero(int anchoTablero);

    // Retorna si el modo desarrollador est� activado o no
    bool getModoDesarrollador();

    // Activa o desactiva el modo desarrollador
    bool setModoDesarrollador(bool modoDesarrollador);

    // Imprime el separador del encabezado del tablero
    void imprimirSeparadorEncabezado();

    // Imprime los separadores de filas del tablero
    void imprimirSeparadorFilas();

    // Imprime el encabezado del tablero (n�meros de columnas)
    void imprimirEncabezado();

    // Imprime el tablero en pantalla
    void imprimir();

    // Coloca una mina en la posici�n (x, y)
    bool colocarMina(int x, int y);

    // Descubre una celda del tablero en la posici�n (x, y)
    bool descubrirMina(int x, int y);

    // Cuenta cu�ntas celdas sin minas a�n no han sido descubiertas
    int contarCeldasSinMinasYSinDescubrir();

private:
    int alturaTablero; // Altura del tablero
    int anchoTablero; // Ancho del tablero
    bool modoDesarrollador; // Indica si el modo desarrollador est� activado o no
    vector<vector<Celda>> contenidoTablero; // Matriz de celdas que representa el tablero

    // Retorna la representaci�n de una celda con mina en (x, y)
    string getRepresentacionMina(int x, int y);

    // Cuenta cu�ntas minas hay cerca de una celda en (fila, columna)
    int minasCercanas(int fila, int columna);
};

#endif // TABLERO_H
