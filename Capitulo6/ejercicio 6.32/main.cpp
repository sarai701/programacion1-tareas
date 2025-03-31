#include <iostream>
using namespace std;

// Función que calcula los puntos de calidad basados en el promedio
int calcularPuntos(double promedio) {
    if (promedio >= 90) return 4;
    if (promedio >= 80) return 3;
    if (promedio >= 70) return 2;
    if (promedio >= 60) return 1;
    return 0; // Si es menor que 60
}

int main() {
    double promedio;

    cout << "SISTEMA DE CALCULO DE PUNTOS DE CALIDAD\n";
    cout << "--------------------------------------\n";
    cout << "Ingrese el promedio del estudiante (0-100): ";
    cin >> promedio;

    // Validación de entrada
    if (promedio < 0 || promedio > 100) {
        cout << "Error: El promedio debe estar entre 0 y 100\n";
        return 1; // Salir con error si el promedio no es válido
    }

    // Llamar a la función para calcular los puntos
    int puntos = calcularPuntos(promedio);

    // Mostrar los resultados
    cout << "\nPromedio ingresado: " << promedio << endl;
    cout << "Puntos de calidad: " << puntos << endl;

    // Escala de puntos
    cout << "\nEscala de puntos:\n";
    cout << "90-100: 4 puntos\n";
    cout << "80-89: 3 puntos\n";
    cout << "70-79: 2 puntos\n";
    cout << "60-69: 1 punto\n";
    cout << "Menor que 60: 0 puntos\n";

    return 0;
}
