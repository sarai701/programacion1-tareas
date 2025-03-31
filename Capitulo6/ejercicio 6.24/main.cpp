#include <iostream>

using namespace std;

// Función para calcular el cociente de la división
int calcularCociente(int a, int b) {
    return a / b;
}

// Función para calcular el residuo de la división
int calcularResiduo(int a, int b) {
    return a % b;
}

// Función para separar y mostrar los dígitos de un número
void separarDigitos(int numero) {
    while (numero > 0) {
        cout << numero % 10 << "  "; // Imprimir el último dígito
        numero /= 10;  // Eliminar el último dígito
    }
    cout << endl;
}

int main() {
    int a, b, numero;

    // Entrada para calcular cociente y residuo
    cout << "Ingrese dos números enteros (a y b): ";
    cin >> a >> b;

    cout << "Cociente de " << a << " / " << b << " = " << calcularCociente(a, b) << endl;
    cout << "Residuo de " << a << " % " << b << " = " << calcularResiduo(a, b) << endl;

    // Entrada para separar dígitos
    cout << "Ingrese un número entre 1 y 32767: ";
    cin >> numero;

    // Validación del número
    if (numero < 1 || numero > 32767) {
        cout << "Número fuera de rango." << endl;
    } else {
        // Separar y mostrar los dígitos en orden inverso
        separarDigitos(numero);
    }

    return 0;
}
