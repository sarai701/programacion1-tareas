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
    cout << "Ingrese un n�mero: ";
    cin >> numero;

    cout << fixed << setprecision(6);
    cout << "\nN�mero original: " << numero << endl;
    cout << "Redondeado a entero: " << redondear(numero, 0) << endl;
    cout << "Redondeado a d�cimas: " << redondear(numero, 1) << endl;
    cout << "Redondeado a cent�simas: " << redondear(numero, 2) << endl;
    cout << "Redondeado a mil�simas: " << redondear(numero, 3) << endl;

    return 0;
}
