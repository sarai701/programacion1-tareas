//Priscila Sarai Guzm�n Calgua
#include <iostream>
#include <unistd.h>
#include "Config.h"
using namespace std;

//Constructor
//Inicializa los valores del tablero y las configuraciones del juego
Config::Config(int filasTablero, int columnasTablero, int minasTablero, bool modoDesarrolladorTablero, int vidasTablero)
{
    //El operador this se usa para diferenciar entre los par�metrosde la funci�n
    // y los atributos de la clase, ya que tienen el mismo nombre
    this->filasTablero = filasTablero;
    this->columnasTablero = columnasTablero;
    this->minasTablero = minasTablero;
    this->modoDesarrolladorTablero = modoDesarrolladorTablero;
    this->vidasTablero = vidasTablero;
}
//M�todo para mostrar y modificar la configuraci�n del juego
//Permite cambiar filas, columnas, minas, modo desarrollador y vidas del jugador
void Config::menuConfiguracion()
{
    int opciones; //Guarda la opci�n seleccionada por el usuario
    int valorIngresado; //Guarda el nuevo valor ingresado por el usuario
    bool repetir = true; //Variable de control para repetir el men�
    do
    {
        system("cls"); //Limpia la pantalla
        //Muestra el men� con la configuraci�n actual
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
        //Si el usuario no eligi� regresar, solicita un nuevo valor
        if (opciones!=6)
        {
            cout << "\n\tIngrese el valor que desea cambiar: ";
            cin >> valorIngresado;
        }
        switch (opciones) //Analiza la opci�n seleccionada
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
        case 6: repetir = false; //Sale del men�
                break;
        }
        system("pause"); //Pausa la ejecuci�n hasta que el usuario presione nuevamente una opci�n
    } while (repetir);
}
//M�todo get para obtener los valores de la configuraci�n
//M�todo set para modificar los valores de la configuraci�n
int Config::getfilasTablero() //Obtiene el n�mero de filas del tablero
{
    return this->filasTablero;
}
int Config::setfilasTablero(int filasTablero) //Establece el n�mero de filas del tablero
{
    this->filasTablero=filasTablero;
}
int Config::getcolumnasTablero() //Obtiene el n�mero de columnas del tablero
{
    return this->columnasTablero;
}
int Config::setcolumnasTablero(int columnasTablero) //Establece el n�mero de columnas del tablero
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
bool Config::getmodoDesarrolladorTablero() //Verifica si el modo desarrollador est� activado
{
    return this->modoDesarrolladorTablero;
}
bool Config::setmodoDesarrolladorTablero(bool modoDesarrolladorTablero) //Activa o desactiva el modo desarrollador
{
    this->modoDesarrolladorTablero=modoDesarrolladorTablero;
}
int Config::getvidasTablero() //Obtiene el n�mero de vidas del jugador
{
    return this->vidasTablero;
}
int Config::setvidasTablero(int vidasTablero) //Establece el n�mero de vidas del jugador
{
    this->vidasTablero=vidasTablero;
}


