//Priscila Sarai Guzmán Calgua
#include <iostream>
#include <unistd.h>
#include "Config.h"
using namespace std;

//Constructor
//Inicializa los valores del tablero y las configuraciones del juego
Config::Config(int filasTablero, int columnasTablero, int minasTablero, bool modoDesarrolladorTablero, int vidasTablero)
{
    //El operador this se usa para diferenciar entre los parámetrosde la función
    // y los atributos de la clase, ya que tienen el mismo nombre
    this->filasTablero = filasTablero;
    this->columnasTablero = columnasTablero;
    this->minasTablero = minasTablero;
    this->modoDesarrolladorTablero = modoDesarrolladorTablero;
    this->vidasTablero = vidasTablero;
}
//Método para mostrar y modificar la configuración del juego
//Permite cambiar filas, columnas, minas, modo desarrollador y vidas del jugador
void Config::menuConfiguracion()
{
    int opciones; //Guarda la opción seleccionada por el usuario
    int valorIngresado; //Guarda el nuevo valor ingresado por el usuario
    bool repetir = true; //Variable de control para repetir el menú
    do
    {
        system("cls"); //Limpia la pantalla
        //Muestra el menú con la configuración actual
        cout << "\n\n\t\tCONFIGURACION ACTUAL -Menu-" << endl;
        cout << "\t\t-------------------"<< endl;
        cout << "\t\t1. Filas del Tablero ----> " << this->getfilasTablero() << endl;
        cout << "\t\t2. Columnas del Tablero -> " << this->getcolumnasTablero() << endl;
        cout << "\t\t3. Minas del Tablero ----> " << this->getminasTablero() << endl;
        cout << "\t\t4. Modo del Juego -------> " << this->getmodoDesarrolladorTablero() << endl;
        cout << "\t\t5. Vidas del Jugador ----> " << this->getvidasTablero() << endl;
        cout << "\t\t6. Regresar al menu general" << endl;
        cout << "\n\t\tIngrese una opcion: ";
        cin >> opciones;
        //Si el usuario no eligió regresar, solicita un nuevo valor
        if (opciones!=6)
        {
            cout << "\n\tIngrese el valor que desea cambiar: ";
            cin >> valorIngresado;
        }
        switch (opciones) //Analiza la opción seleccionada
        {
        case 1:
            {
                this->setfilasTablero(valorIngresado);
                cout << "Filas del Tablero actualizadas" << endl;
                break;
            }
        case 2:
            {
                this->setcolumnasTablero(valorIngresado);
                cout << "Columnas del Tablero actualizadas" << endl;
                break;
            }
        case 3:
            {
                this->setminasTablero(valorIngresado);
                cout << "Minas del Tablero actualizadas" << endl;
                break;
            }
        case 4:
            {
                this->setmodoDesarrolladorTablero(valorIngresado);
                cout << "Modo del Juego actualizado" << endl;
                break;
            }
        case 5:
            {
                this->setvidasTablero(valorIngresado);
                cout << "Vidas del Juego actualizadas" << endl;
                break;
            }
        case 6: repetir = false; //Sale del menú
                break;
        }
        system("pause"); //Pausa la ejecución hasta que el usuario presione nuevamente una opción
    } while (repetir);
}
//Método get para obtener los valores de la configuración
//Método set para modificar los valores de la configuración
int Config::getfilasTablero() //Obtiene el número de filas del tablero
{
    return this->filasTablero;
}
int Config::setfilasTablero(int filasTablero) //Establece el número de filas del tablero
{
    this->filasTablero=filasTablero;
}
int Config::getcolumnasTablero() //Obtiene el número de columnas del tablero
{
    return this->columnasTablero;
}
int Config::setcolumnasTablero(int columnasTablero) //Establece el número de columnas del tablero
{
    this->columnasTablero=columnasTablero;
}
int Config::getminasTablero() //Obtiene la cantidad de minas en el tablero
{
    return this->minasTablero;
}
int Config::setminasTablero(int minasTablero) //Establece la cantidad de minas en el tablero
{
    this->minasTablero=minasTablero;
}
bool Config::getmodoDesarrolladorTablero() //Verifica si el modo desarrollador está activado
{
    return this->modoDesarrolladorTablero;
}
bool Config::setmodoDesarrolladorTablero(bool modoDesarrolladorTablero) //Activa o desactiva el modo desarrollador
{
    this->modoDesarrolladorTablero=modoDesarrolladorTablero;
}
int Config::getvidasTablero() //Obtiene el número de vidas del jugador
{
    return this->vidasTablero;
}
int Config::setvidasTablero(int vidasTablero) //Establece el número de vidas del jugador
{
    this->vidasTablero=vidasTablero;
}


