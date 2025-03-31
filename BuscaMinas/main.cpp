//Daniela Nohemy Divas Carrillo
#include <iostream>
#include <unistd.h>
#include "Juego.h"
#include "Config.h"

using namespace std;

int main()
{
    // Definici�n de constantes
    const int FILASTABLERO = 5;       // N�mero de filas del tablero
    const int COLUMNASTABLERO = 5;    // N�mero de columnas del tablero
    const int MINASENTABLERO = 3;     // Cantidad de minas en el tablero
    const bool MODODESARROLLADOR = true; // Muestra minas si es true
    const int VIDASTABLERO = 3;       // 	El numero de minasd el jugador

    // Creamos un objeto de configuraci�n con estos vlares
    Config configuracionJuego(FILASTABLERO, COLUMNASTABLERO, MINASENTABLERO, MODODESARROLLADOR, VIDASTABLERO);

    // Se crea un objeto del juego, con la cantidad de minas y tambi�n la configuraci�n del tablero
    Juego juego(Tablero(configuracionJuego.getfilasTablero(), configuracionJuego.getcolumnasTablero(), configuracionJuego.getmodoDesarrolladorTablero()), configuracionJuego.getminasTablero());

    // Usamos Srand para los n�meros aleatorios
    srand(getpid());

    int opciones;  // Se usa para guardar la opci�n elegida del men�
    bool repetir = true; // Mantiene el men� activo

    do
    {
        system("cls"); // Limpia la pantalla

        // Muestra las opciones del meni
        cout << "\n\n\t\tBUSCA MINAS -Menu-" << endl;
        cout << "\t\t-------------------"<< endl;
        cout << "\t\t1. Configuracion del Juego" << endl;
        cout << "\t\t2. Iniciar el Juego" << endl;
        cout << "\t\t3. Salir del Juego" << endl;
        cout << "\n\t\tIngrese una opcion: ";
        cin >> opciones; // El usuario elige una opci�n

        switch (opciones)
        {
        case 1:
            {
                // opci�n 1 para el menu de la configuraci�n
                configuracionJuego.menuConfiguracion();
                break;
            }
        case 2:
            {
            // cuando elige 2 se inicia la partida


                // Obtener las vidas configuradas
                int vidas = configuracionJuego.getvidasTablero();

                // Se crea un partida con los valors elegidos por el usuario
                Juego juegoTemporal(Tablero(configuracionJuego.getfilasTablero(),
                                            configuracionJuego.getcolumnasTablero(),
                                            configuracionJuego.getmodoDesarrolladorTablero()),
                                    configuracionJuego.getminasTablero());

                // Iniciar el juego con el numero de vidas configuradas
                juegoTemporal.iniciar(vidas);

                system("pause"); // Se pausa para que el usuario pueda elegir una nueva opci�n
                break;
            }
        case 3:
            // Si se eleg� el  3 har� que salgas del bucle
            repetir = false;
            break;
        }
    } while (repetir); // Te mantiene dentro del bucle hasta que elijas salir

    system("cls"); // Limpia la pantalla antes de salir
    return 0;
}
