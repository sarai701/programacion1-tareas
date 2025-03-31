#include <iostream>

using namespace std;

void mostrarCuadrado(int lado) {
    for (int i = 0; i < lado; i++) {
        cout << string(lado, '*') << endl; // Usar string para simplificar la impresión
    }
}

int main() {
    int lado;

    cout << "Ingrese el tamaño del lado del cuadrado: ";
    cin >> lado;

    mostrarCuadrado(lado);

    return 0;
}
