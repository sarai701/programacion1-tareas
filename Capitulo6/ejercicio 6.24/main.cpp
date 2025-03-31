#include <iostream>

using namespace std;

// Funci�n para calcular el cociente de la divisi�n
int calcularCociente(int a, int b) {
    return a / b;
}

// Funci�n para calcular el residuo de la divisi�n
int calcularResiduo(int a, int b) {
    return a % b;
}

// Funci�n para separar y mostrar los d�gitos de un n�mero
void separarDigitos(int numero) {
    while (numero > 0) {
        cout << numero % 10 << "  "; // Imprimir el �ltimo d�gito
        numero /= 10;  // Eliminar el �ltimo d�gito
    }
    cout << endl;
}

int main() {
    int a, b, numero;

    // Entrada para calcular cociente y residuo
    cout << "Ingrese dos n�meros enteros (a y b): ";
    cin >> a >> b;

    cout << "Cociente de " << a << " / " << b << " = " << calcularCociente(a, b) << endl;
    cout << "Residuo de " << a << " % " << b << " = " << calcularResiduo(a, b) << endl;

    // Entrada para separar d�gitos
    cout << "Ingrese un n�mero entre 1 y 32767: ";
    cin >> numero;

    // Validaci�n del n�mero
    if (numero < 1 || numero > 32767) {
        cout << "N�mero fuera de rango." << endl;
    } else {
        // Separar y mostrar los d�gitos en orden inverso
        separarDigitos(numero);
    }

    return 0;
}
