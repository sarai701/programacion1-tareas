//Karla Patricia Ruiz Ordoñez
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
    this->minaDescubierta = false; // Inicialmente, la mina no está descubierta
}
// Método para establecer la coordenada X
int Celda::setCoordenadaX(int coordenadaX)
{
    this->coordenadaX = coordenadaX; // Asigna el valor recibido a la coordenada X de la celda
}
// Método para obtener la coordenada X
int Celda::getCoordenadaX()
{
    return this->coordenadaX; // Devuelve el valor de la coordenada X
}
// Método para establecer la coordenada Y
int Celda::setCoordenadaY(int coordenadaY)
{
    this->coordenadaY = coordenadaY; // Asigna el valor recibido a la coordenada Y de la celda
}
// Método para obtener la coordenada Y
int Celda::getCoordenadaY()
{
    return this->coordenadaY; // Devuelve el valor de la coordenada Y
}
// Método para establecer si la celda tiene una mina
bool Celda::setMina(bool estadoMina)
{
    if (this->getMina()) // Si la celda ya tiene una mina, no se puede cambiar
    {
        return false; // Retorna false indicando que no se pudo establecer la mina
    }
    else
    {
        this->mina = estadoMina; // Asigna el estado de mina a la celda
        return true; // Retorna true indicando que se asignó correctamente
    }
}
// Método para obtener si la celda tiene una mina
bool Celda::getMina()
{
    return this->mina; // Retorna true si la celda tiene mina, false si no
}
// Método para marcar si la mina ha sido descubierta
bool Celda::setMinaDescubierta(bool minaDescubierta)
{
    this->minaDescubierta = minaDescubierta; // Cambia el estado de mina descubierta
}
// Método para obtener si la mina ha sido descubierta
bool Celda::getMinaDescubierta()
{
    return this->minaDescubierta; // Devuelve true si la mina fue descubierta, false si no
}
// Método para imprimir la información de la celda en consola
void Celda::imprimirCelda()
{
    // Muestra las coordenadas de la celda y si tiene una mina o no
    cout << "Celda en " << this->coordenadaX << ", " << this->coordenadaY << " con mina? " << this->mina << "\n";
}
