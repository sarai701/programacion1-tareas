#include <iostream>
using namespace std;

// Función recursiva de exponenciación
long potencia(int base, int exponente) {
    // Caso base: exponente == 0, cualquier número elevado a 0 es 1
    if (exponente == 0) {
        return 1;
    }
    // Paso recursivo: base * potencia(base, exponente-1)
    return base * potencia(base, exponente - 1);
}

int main() {
    cout << "CALCULADORA DE POTENCIAS (RECURSIVA)\n";
    cout << "-----------------------------------\n";

    int base, exponente;
    cout << "Ingrese la base: ";
    cin >> base;
    cout << "Ingrese el exponente (entero ≥ 0): ";
    cin >> exponente;

    if (exponente < 0) {
        cout << "Error: El exponente debe ser ≥ 0\n";
    } else {
        cout << base << "^" << exponente << " = " << potencia(base, exponente) << endl;
    }

    return 0;
}
