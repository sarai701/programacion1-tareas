#include <iostream>
#include <cmath> // Para usar sqrt (raíz cuadrada)
using namespace std;

// Función para calcular la distancia entre dos puntos
double distancia(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

int main() {
    double x1, y1, x2, y2;

    // Pedimos al usuario los valores de los puntos
    cout << "Ingrese las coordenadas del primer punto (x1 y1): ";
    cin >> x1 >> y1;

    cout << "Ingrese las coordenadas del segundo punto (x2 y2): ";
    cin >> x2 >> y2;

    // Llamamos a la función distancia y mostramos el resultado
    cout << "La distancia entre los dos puntos es: " << distancia(x1, y1, x2, y2) << endl;

    return 0;
}
