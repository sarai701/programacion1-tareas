//Jonathan Samuel Gonzalez Ixpata
#include "Juego.h"
#include <fstream>
#include <unistd.h>

// Genera un número aleatorio dentro del rango especificado.
// Retorna un número aleatorio entre minimo y maximo.
int Juego::aleatorio_en_rango(int minimo, int maximo)
{
    return minimo + rand() / (RAND_MAX / (maximo - minimo + 1) + 1);
}

// Devuelve una fila aleatoria basada en la altura del tablero.
int Juego::filaAleatoria()
{
    return this->aleatorio_en_rango(0, this->tablero.getAlturaTablero() - 1);
}

// Devuelve una columna aleatoria basada en el ancho del tablero.
int Juego::columnaAleatoria()
{
    return this->aleatorio_en_rango(0, this->tablero.getAnchoTablero() - 1);
}

// Constructor de la clase Juego.
// Recibe un objeto Tablero y la cantidad de minas a colocar.
// Se encarga de inicializar el tablero y colocar las minas de forma aleatoria.
Juego::Juego(Tablero tablero, int cantidadMinas)
{
    this->tablero = tablero;
    this->cantidadMinas = cantidadMinas;
    this->colocarMinasAleatoriamente();
}

// Coloca minas de forma aleatoria en el tablero hasta alcanzar la cantidad especificada.
void Juego::colocarMinasAleatoriamente()
{
    int x, y, minasColocadas = 0;

    while (minasColocadas < this->cantidadMinas)
    {
        x = this->columnaAleatoria();
        y = this->filaAleatoria();
        if (this->tablero.colocarMina(x, y))
        {
            minasColocadas++;
        }
    }
}

// Solicita al usuario que ingrese la fila donde desea jugar.
// Lee la entrada del usuario y ajusta el valor para que comience desde 0.
int Juego::solicitarFilaUsuario()
{
    int fila = 0;
    cout << "Ingresa la FILA en la que desea jugar: ";
    cin >> fila;
    return fila - 1;
}

// Solicita al usuario que ingrese la columna donde desea jugar.
// Lee la entrada del usuario y ajusta el valor para que comience desde 0.
int Juego::solicitarColumnaUsuario()
{
    int columna = 0;
    cout << "Ingresa la COLUMNA en la que desea jugar: ";
    cin >> columna;
    return columna - 1;
}

// Verifica si el jugador ha ganado el juego, comprobando que no queden celdas sin descubrir sin minas.
bool Juego::jugadorGana()
{
    int conteo = this->tablero.contarCeldasSinMinasYSinDescubrir();
    return conteo == 0;
}

// Inicia el juego y gestiona la interacción con el usuario, utilizando las vidas disponibles.
// Mientras el jugador tenga vidas, permite descubrir celdas y verifica si ha ganado.
// En caso de descubrir una mina, se pierde una vida y se muestra el mensaje correspondiente.
// Si se pierden todas las vidas o se gana el juego, se muestra el resultado y se termina el ciclo.
void Juego::iniciar(int &vidas)
{
    int fila, columna;
    while (vidas > 0)
    {
        this->tablero.imprimir();
        fila = this->solicitarFilaUsuario();
        columna = this->solicitarColumnaUsuario();
        bool respuestaAUsuario = this->tablero.descubrirMina(columna, fila);

        // Manejo de vidas: Si el usuario descubre una mina, pierde una vida.
        if (!respuestaAUsuario)
        {
            vidas--;
            if (vidas > 0)
            {
                cout << "¡Cuidado! Perdiste una vida. Te quedan " << vidas << " vidas.\n";
            }
            else
            {
                cout << "¡Perdiste todas tus vidas! Fin del juego.\n";
                this->tablero.setModoDesarrollador(true);
                this->tablero.imprimir();
                break;
            }
        }

        // Comprueba si el jugador ha ganado el juego.
        if (this->jugadorGana())
        {
            cout << "¡Ganaste el Juego!\n";
            this->tablero.setModoDesarrollador(true);
            this->tablero.imprimir();
            break;
        }
    }
}
