//Karla Patricia Ruiz Ordo�ez
#include "Celda.h"
#include <iostream>
using namespace std;
// Constructor por defecto
Celda::Celda()
{
    // No hace nada porque no inicializa valores
}
// Constructor que inicializa la celda con coordenadas y estado de mina
Celda::Celda(int coordenadaX, int coordenadaY, bool estadoMina)
{
    this->coordenadaX = coordenadaX; // Asigna la coordenada X recibida al atributo de la clase
    this->coordenadaY = coordenadaY; // Asigna la coordenada Y recibida al atributo de la clase
    this->mina = estadoMina; // Establece si la celda tiene una mina o no
    this->minaDescubierta = false; // Inicialmente, la mina no est� descubierta
}
// M�todo para establecer la coordenada X
int Celda::setCoordenadaX(int coordenadaX)
{
    this->coordenadaX = coordenadaX; // Asigna el valor recibido a la coordenada X de la celda
}
// M�todo para obtener la coordenada X
int Celda::getCoordenadaX()
{
    return this->coordenadaX; // Devuelve el valor de la coordenada X
}
// M�todo para establecer la coordenada Y
int Celda::setCoordenadaY(int coordenadaY)
{
    this->coordenadaY = coordenadaY; // Asigna el valor recibido a la coordenada Y de la celda
}
// M�todo para obtener la coordenada Y
int Celda::getCoordenadaY()
{
    return this->coordenadaY; // Devuelve el valor de la coordenada Y
}
// M�todo para establecer si la celda tiene una mina
bool Celda::setMina(bool estadoMina)
{
    if (this->getMina()) // Si la celda ya tiene una mina, no se puede cambiar
    {
        return false; // Retorna false indicando que no se pudo establecer la mina
    }
    else
    {
        this->mina = estadoMina; // Asigna el estado de mina a la celda
        return true; // Retorna true indicando que se asign� correctamente
    }
}
// M�todo para obtener si la celda tiene una mina
bool Celda::getMina()
{
    return this->mina; // Retorna true si la celda tiene mina, false si no
}
// M�todo para marcar si la mina ha sido descubierta
bool Celda::setMinaDescubierta(bool minaDescubierta)
{
    this->minaDescubierta = minaDescubierta; // Cambia el estado de mina descubierta
}
// M�todo para obtener si la mina ha sido descubierta
bool Celda::getMinaDescubierta()
{
    return this->minaDescubierta; // Devuelve true si la mina fue descubierta, false si no
}
// M�todo para imprimir la informaci�n de la celda en consola
void Celda::imprimirCelda()
{
    // Muestra las coordenadas de la celda y si tiene una mina o no
    cout << "Celda en " << this->coordenadaX << ", " << this->coordenadaY << " con mina? " << this->mina << "\n";
}
