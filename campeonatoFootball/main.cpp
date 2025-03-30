
//Este programa realizara el control del campeonato de futbol de ida y vuelta
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <algorithm>

using namespace std;

#define NUM_EQUIPOS 6
#define MAX_GOLES 10
#define MAX_LONGITUD_CADENA 100

// Estructura para almacenar equipos y su información
struct Equipo {
    char nombre[MAX_LONGITUD_CADENA];
    int puntos, ganados, empatados, perdidos;
};

// Prototipos de funciones
void iniciarTorneo();
void llenarMatriz(int matriz[NUM_EQUIPOS][NUM_EQUIPOS], Equipo equipos[]);
void calcularEstadisticas(int matriz[NUM_EQUIPOS][NUM_EQUIPOS], Equipo equipos[]);
void mostrarResultados(int matriz[NUM_EQUIPOS][NUM_EQUIPOS], Equipo equipos[]);
void mostrarTabla(Equipo equipos[]);
void determinarCampeonDescenso(Equipo equipos[]);

int main() {
    srand(time(0));
    iniciarTorneo();
    return 0;
}

void iniciarTorneo() {
    Equipo equipos[NUM_EQUIPOS];
    int matrizPartidos[NUM_EQUIPOS][NUM_EQUIPOS] = {0};
    char opcion;
    bool repetir = true;

    do {
        system("cls");  // Limpiar pantalla

        cout << "Ingrese los nombres de los " << NUM_EQUIPOS << " equipos:\n";
        cin.ignore();
        for (int i = 0; i < NUM_EQUIPOS; i++) {
            cout << "Equipo " << i + 1 << ": ";
            cin.getline(equipos[i].nombre, MAX_LONGITUD_CADENA);
            equipos[i].puntos = equipos[i].ganados = equipos[i].empatados = equipos[i].perdidos = 0;
        }

        cout << "\n*** Campeonato de Futbol ***\n\n";

        llenarMatriz(matrizPartidos, equipos);
        calcularEstadisticas(matrizPartidos, equipos);
        mostrarResultados(matrizPartidos, equipos);
        mostrarTabla(equipos);
        determinarCampeonDescenso(equipos);

        cout << "Desea generar otro torneo (s/n)? ";
        cin >> opcion;
        cin.ignore();

        if (opcion == 'n' || opcion == 'N') {
            repetir = false;
        }
    } while (repetir);
}

void llenarMatriz(int matriz[NUM_EQUIPOS][NUM_EQUIPOS], Equipo equipos[]) {
    sort(equipos, equipos + NUM_EQUIPOS, [](Equipo a, Equipo b) {
        return a.puntos > b.puntos;
    });

    for (int i = 0; i < NUM_EQUIPOS; i++) {
        for (int j = i + 1; j < NUM_EQUIPOS; j++) {
            int marcador1 = (i < j) ? rand() % 5 + 2 : rand() % 3;
            int marcador2 = (i < j) ? rand() % 3 : rand() % 5 + 2;
            matriz[i][j] = marcador1;
            matriz[j][i] = marcador2;
        }
    }
}

void calcularEstadisticas(int matriz[NUM_EQUIPOS][NUM_EQUIPOS], Equipo equipos[]) {
    for (int i = 0; i < NUM_EQUIPOS; i++) {
        for (int j = i + 1; j < NUM_EQUIPOS; j++) {
            if (matriz[i][j] > matriz[j][i]) {
                equipos[i].puntos += 3;
                equipos[i].ganados++;
                equipos[j].perdidos++;
            } else if (matriz[i][j] < matriz[j][i]) {
                equipos[j].puntos += 3;
                equipos[j].ganados++;
                equipos[i].perdidos++;
            } else {
                equipos[i].puntos++;
                equipos[j].puntos++;
                equipos[i].empatados++;
                equipos[j].empatados++;
            }
        }
    }
}

void mostrarResultados(int matriz[NUM_EQUIPOS][NUM_EQUIPOS], Equipo equipos[]) {
    cout << "\nResultados de los partidos:\n";
    cout << "----------------------------------------------------\n";
    cout << "| Equipo 1      |  Goles  |  Goles  | Equipo 2     |\n";
    cout << "----------------------------------------------------\n";
    for (int i = 0; i < NUM_EQUIPOS; i++) {
        for (int j = i + 1; j < NUM_EQUIPOS; j++) {
            cout << "| " << setw(15) << equipos[i].nombre << " | "
                 << setw(5) << matriz[i][j] << " | "
                 << setw(5) << matriz[j][i] << " | "
                 << setw(15) << equipos[j].nombre << " |\n";
        }
    }
    cout << "-------------------------------------------------\n";
}

void mostrarTabla(Equipo equipos[]) {
    sort(equipos, equipos + NUM_EQUIPOS, [](Equipo a, Equipo b) {
        return a.puntos > b.puntos;
    });

    cout << "\n----------------------------------------------------------------\n";
    cout << "Equipo        |  Puntos  |  Ganados | Empatados  |  Perdidos     |\n";
    cout << "------------------------------------------------------------------\n";
    for (int i = 0; i < NUM_EQUIPOS; i++) {
        cout << setw(15) << equipos[i].nombre << "  " << setw(6) << equipos[i].puntos
             << "  " << setw(7) << equipos[i].ganados << "  " << setw(9) << equipos[i].empatados
             << "  " << setw(8) << equipos[i].perdidos << endl;
    }
    cout << "--------------------------------------------------\n";
}

void determinarCampeonDescenso(Equipo equipos[]) {
    cout << "El equipo campeon es: " << equipos[0].nombre << " con " << equipos[0].puntos << " puntos.\n";
    cout << "El equipo que desciende es: " << equipos[NUM_EQUIPOS - 1].nombre << " con " << equipos[NUM_EQUIPOS - 1].puntos << " puntos.\n";
}


