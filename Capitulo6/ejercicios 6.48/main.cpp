#include <iostream>
#define PI 3.14159 // Definimos una constante para PI
using namespace std;

// Funci�n inline para calcular el �rea de un c�rculo
inline double areaCirculo(double radio) {
    return PI * radio * radio;
}

int main() {
    double radio;

    // Pedimos al usuario el radio del c�rculo
    cout << "Ingrese el radio del c�rculo: ";
    cin >> radio;

    // Llamamos a la funci�n inline y mostramos el resultado
    cout << "El �rea del c�rculo es: " << areaCirculo(radio) << endl;

    return 0;
}
i
