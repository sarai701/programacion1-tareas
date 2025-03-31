#include <iostream>
using namespace std;

// Definimos la plantilla de función para obtener el mayor de dos valores
template <typename T>
T maximo(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    // Pruebas con diferentes tipos de datos
    int a = 10, b = 25;
    char c1 = 'A', c2 = 'Z';
    double d1 = 5.7, d2 = 2.3;

    // Llamadas a la función plantilla
    cout << "Mayor entre " << a << " y " << b << " es: " << maximo(a, b) << endl;
    cout << "Mayor entre '" << c1 << "' y '" << c2 << "' es: '" << maximo(c1, c2) << "'" << endl;
    cout << "Mayor entre " << d1 << " y " << d2 << " es: " << maximo(d1, d2) << endl;

    return 0;
}
