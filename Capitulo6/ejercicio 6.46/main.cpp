#include <iostream>
#include <cmath> // Biblioteca matem�tica
#include <iomanip> // Para formatear la salida
using namespace std;

int main() {
    cout << fixed << setprecision(4); // Formato para mostrar 4 decimales

    // sqrt (Ra�z cuadrada)
    cout << "sqrt(x) - Ra�z cuadrada\n";
    for (double x = 0; x <= 10; x += 2) {
        cout << "sqrt(" << x << ") = " << sqrt(x) << endl;
    }
    cout << "----------------------------\n";

    // pow (Potencia)
    cout << "pow(x, y) - Potencia\n";
    for (int x = 1; x <= 3; x++) {
        for (int y = 1; y <= 3; y++) {
            cout << "pow(" << x << ", " << y << ") = " << pow(x, y) << endl;
        }
    }
    cout << "----------------------------\n";

    // log (Logaritmo natural)
    cout << "log(x) - Logaritmo natural\n";
    for (double x = 1; x <= 10; x += 2) {
        cout << "log(" << x << ") = " << log(x) << endl;
    }
    cout << "----------------------------\n";

    // exp (Exponencial)
    cout << "exp(x) - Exponencial e^x\n";
    for (double x = 0; x <= 3; x++) {
        cout << "exp(" << x << ") = " << exp(x) << endl;
    }
    cout << "----------------------------\n";

    // sin, cos, tan (Funciones trigonom�tricas)
    cout << "Funciones trigonom�tricas (radianes)\n";
    for (double x = 0; x <= M_PI; x += M_PI / 4) {
        cout << "sin(" << x << ") = " << sin(x)
             << ", cos(" << x << ") = " << cos(x)
             << ", tan(" << x << ") = " << tan(x) << endl;
    }
    cout << "----------------------------\n";

    return 0;
}
