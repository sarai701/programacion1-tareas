//Jonathan Samuel Gonzalez Ixpata
#ifndef JUEGO_H
#define JUEGO_H
#include "Tablero.h"
using namespace std;

/*
 * Clase Juego: Representa la l�gica del juego, gestionando el tablero,
 * las minas y la interacci�n con el usuario.
 */
class Juego
{
private:
    Tablero tablero;      // Objeto que representa el tablero de juego.
    int cantidadMinas;    // N�mero de minas que se colocar�n en el tablero.
    string nombreJugador; // Nombre del jugador.

    // Genera un n�mero aleatorio dentro de un rango especificado.
    // Devuelve un n�mero aleatorio entre minimo y maximo.
    int aleatorio_en_rango(int minimo, int maximo);

    // Obtiene una fila aleatoria basada en la altura del tablero.
    // Devuelve el �ndice de la fila aleatoria.
    int filaAleatoria();

    // Obtiene una columna aleatoria basada en el ancho del tablero.
    // Devuelve el �ndice de la columna aleatoria.
    int columnaAleatoria();

public:
    // Constructor que inicializa el juego con un tablero y la cantidad de minas.
    Juego(Tablero tablero, int cantidadMinas);

    // Coloca las minas en posiciones aleatorias del tablero hasta alcanzar la cantidad indicada.
    void colocarMinasAleatoriamente();

    // Solicita al usuario que ingrese una fila y devuelve el �ndice correspondiente (ajustado a base 0).
    int solicitarFilaUsuario();

    // Solicita al usuario que ingrese una columna y devuelve el �ndice correspondiente (ajustado a base 0).
    int solicitarColumnaUsuario();

    // Verifica si el jugador ha ganado, comprobando si no quedan celdas sin descubrir sin minas.
    // Retorna true si el jugador gana, false en caso contrario.
    bool jugadorGana();

    // Inicia el juego, manejando la interacci�n con el usuario y las vidas disponibles.
    // vidas: N�mero de vidas que posee el jugador.
    void iniciar(int &vidas);

    // Muestra la portada del juego a partir de un archivo de texto.
    // nombreArchivo: Nombre del archivo que contiene la portada.
    void dibujarPortada(string nombreArchivo);
};

#endif // JUEGO_H
