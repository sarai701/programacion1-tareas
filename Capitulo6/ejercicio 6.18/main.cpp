#include <iostream>

using namespace std;

int calcularPotencia(int base, int exponente) {
    int resultado = 1;

    // Uso de ciclo while para calcular la potencia
    while (exponente > 0) {
        resultado *= base;
        exponente--;
    }

    return resultado;
}

int main() {
    int base, exponente;

    cout << "Ingrese la base: ";
    cin >> base;
    cout << "Ingrese el exponente (mayor o igual a 1): ";
    cin >> exponente;

    if (exponente < 1) {
        cout << "El exponente debe ser mayor o igual a 1." << endl;
        return 1;
    }

    cout << base << "^" << exponente << " = " << calcularPotencia(base, exponente) << endl;

    return 0;
}
