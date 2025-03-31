#include <iostream>
#define PI 3.14159 // Definimos una constante para PI
using namespace std;

// Función inline para calcular el área de un círculo
inline double areaCirculo(double radio) {
    return PI * radio * radio;
}

int main() {
    double radio;

    // Pedimos al usuario el radio del círculo
    cout << "Ingrese el radio del círculo: ";
    cin >> radio;

    // Llamamos a la función inline y mostramos el resultado
    cout << "El área del círculo es: " << areaCirculo(radio) << endl;

    return 0;
}
i
