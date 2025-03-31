#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double redondear(double numero, int decimales) {
    double factor = pow(10, decimales);
    return floor(numero * factor + 0.5) / factor;
}

int main() {
    double numero;
    cout << "Ingrese un número: ";
    cin >> numero;

    cout << fixed << setprecision(6);
    cout << "\nNúmero original: " << numero << endl;
    cout << "Redondeado a entero: " << redondear(numero, 0) << endl;
    cout << "Redondeado a décimas: " << redondear(numero, 1) << endl;
    cout << "Redondeado a centésimas: " << redondear(numero, 2) << endl;
    cout << "Redondeado a milésimas: " << redondear(numero, 3) << endl;

    return 0;
}
