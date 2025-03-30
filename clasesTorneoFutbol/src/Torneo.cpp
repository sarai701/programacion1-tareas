#include "Torneo.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

Torneo::Torneo(){
    for (int i= 0; i < 6; i++){
        for (int j = 0; j < 6; j++){
            matrizPartidos[i][j] = 0;
        }
    }
}
void Torneo::iniciarTorneo(){
    string nombre;
    for (int i = 0; i < 6; i++){
        cout << "Ingrese el nombre del equipo " << i + 1 << ": ";
        cin >> nombre;
        equipos[i].setNombre(nombre);
    }
    jugarPartidos();
    mostrarResultados();
    mostrarTabla();
}
void Torneo::jugarPartidos(){
    srand(time(0));
    for (int i = 0; i < 6; i++){
        for (int j = i + 1; j < 6; j++){
            matrizPartidos[i][j] = rand()% 5;
            matrizPartidos[j][i] = rand()% 5;
            equipos[i].actualizarEstadisticas(matrizPartidos[i][j], matrizPartidos[j][i]);
            equipos[j].actualizarEstadisticas(matrizPartidos[j][i], matrizPartidos[i][j]);
        }
    }
}
void Torneo::mostrarResultados(){
    cout << "\nResultados de los Partidos:\n";
    cout << "----------------------------------------\n";
    cout << "| Equipo1   | Goles | Goles | Equipo2   |\n";
    cout << "----------------------------------------\n";

    for (int i = 0; i < 6; i++){
        for (int j = i + 1; j < 6; j++){
            cout << "| " << setw(9) << left << equipos[i].getNombre() << " | "
                 << setw(5) << matrizPartidos[i][j] << " | "
                 << setw(5) << matrizPartidos[j][i] << " | "
                 << setw(9) << equipos[j].getNombre() << " |\n";
            cout << "---------------------------------------\n";
        }
    }
}

void Torneo::mostrarTabla() {
    for (int i = 0; i < 6; i++) {
        for (int j = i + 1; j < 6; j++) {
            if (equipos[i].getPuntos() < equipos[j].getPuntos()) {
                swap(equipos[i], equipos[j]);
            }
        }
    }
    cout << "-------------------------------------------------------\n";
    cout << "| Equipo     | Puntos | Ganados | Empatados | Perdidos |\n";
    cout << "-------------------------------------------------------\n";

    for (int i = 0; i < 6; i++) {
        cout << "| " << setw(10) << left << equipos[i].getNombre() << " | "
             << setw(6) << equipos[i].getPuntos() << " | "
             << setw(7) << equipos[i].getGanados() << " | "
             << setw(9) << equipos[i].getEmpatados() << " | "
             << setw(8) << equipos[i].getPerdidos() << " |\n";
        cout << "-------------------------------------------------------\n";
    }

}



Torneo::~Torneo()
{
    //dtor
}
