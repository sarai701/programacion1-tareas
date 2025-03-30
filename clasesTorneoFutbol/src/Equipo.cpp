#include "Equipo.h"
#include <iostream>
#include <string>

using namespace std;

Equipo::Equipo(){
    nombre = "";
    puntos = ganados = empatados = perdidos = 0;
}

void Equipo::setNombre(const string& nombre){
    this->nombre = nombre;
}
string Equipo::getNombre()const {
    return nombre;
}
int Equipo::getPuntos()const{
    return puntos;
}
int Equipo::getGanados()const{
    return ganados;
}
int Equipo::getEmpatados()const{
    return empatados;
}
int Equipo::getPerdidos()const{
    return perdidos;
}
void Equipo::actualizarEstadisticas(int golesFavor, int golesContra){
    if (golesFavor > golesContra){
        puntos += 3;
        ganados++;
    } else if (golesFavor < golesContra){
        perdidos++;
    } else {
        puntos++;
        empatados++;
    }
}
void Equipo::mostrarEstadisticas() {
    cout << nombre
     << " - Puntos: " << puntos
     << ", Ganados: " << ganados
     << ", Empatados: " << empatados
     << ", Perdidos: " << perdidos
     << endl;

}

Equipo::~Equipo()
{
    //dtor
}
