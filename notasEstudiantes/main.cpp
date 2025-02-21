//Priscila Sarai Guzmán Calgua
//Este programa realizara notas finales

#include <iostream>
#include <iomanip>

using namespace std;

const int NUM_ALUMNOS = 5;
const int NUM_NOTAS = 4;

// Función para ingresar las notas de los alumnos
void ingresarNotas(float notas[NUM_ALUMNOS][NUM_NOTAS]) {
    for (int i = 0; i < NUM_ALUMNOS; i++) {
        cout << "Ingrese las notas del alumno " << i + 1 << " (1P, 2P, ACT, EF):\n";
        for (int j = 0; j < NUM_NOTAS; j++) {
            cout << "Nota " << j + 1 << ": ";
            cin >> notas[i][j];
        }
    }
}

// Función para calcular las notas finales
void calcularNotasFinales(float notas[NUM_ALUMNOS][NUM_NOTAS], float finales[NUM_ALUMNOS]) {
    for (int i = 0; i < NUM_ALUMNOS; i++) {
        finales[i] = (notas[i][0] * 20 / 20) + (notas[i][1] * 25 / 25) + (notas[i][2] * 20 / 20) + (notas[i][3] * 35 / 35);
    }
}

// Función para calcular los porcentajes de cada nota
void calcularPorcentajes(float notas[NUM_ALUMNOS][NUM_NOTAS], float porcentajes[NUM_ALUMNOS][NUM_NOTAS]) {
    for (int i = 0; i < NUM_ALUMNOS; i++) {
        porcentajes[i][0] = (notas[i][0] / 20) * 100;
        porcentajes[i][1] = (notas[i][1] / 25) * 100;
        porcentajes[i][2] = (notas[i][2] / 20) * 100;
        porcentajes[i][3] = (notas[i][3] / 35) * 100;
    }
}

// Función para mostrar los resultados
void mostrarResultados(float notas[NUM_ALUMNOS][NUM_NOTAS], float finales[NUM_ALUMNOS], float porcentajes[NUM_ALUMNOS][NUM_NOTAS]) {
    cout << "\nResultados Finales:\n";
    cout << "Alumno\t1P(%)\t2P(%)\tACT(%)\tEF(%)\tFinal" << endl;
    for (int i = 0; i < NUM_ALUMNOS; i++) {
        cout << i + 1 << "\t" << fixed << setprecision(2);
        for (int j = 0; j < NUM_NOTAS; j++) {
            cout << porcentajes[i][j] << "%\t";
        }
        cout << finales[i] << endl;
    }
}

int main() {
    float notas[NUM_ALUMNOS][NUM_NOTAS];
    float finales[NUM_ALUMNOS];
    float porcentajes[NUM_ALUMNOS][NUM_NOTAS];

    ingresarNotas(notas);
    calcularNotasFinales(notas, finales);
    calcularPorcentajes(notas, porcentajes);
    mostrarResultados(notas, finales, porcentajes);

    return 0;
}
