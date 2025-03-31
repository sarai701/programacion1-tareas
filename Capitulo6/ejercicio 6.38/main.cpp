#include <iostream>
using namespace std;

// Función recursiva para resolver las Torres de Hanoi
void hanoi(int n, int origen, int destino, int auxiliar) {
    if (n == 1) {
        // Caso base: mover un solo disco directamente
        cout << origen << " → " << destino << endl;
        return;
    }

    // Paso 1: Mover n-1 discos de la aguja origen a la aguja auxiliar
    hanoi(n - 1, origen, auxiliar, destino);

    // Paso 2: Mover el disco restante de la aguja origen a la aguja destino
    cout << origen << " → " << destino << endl;

    // Paso 3: Mover n-1 discos de la aguja auxiliar a la aguja destino
    hanoi(n - 1, auxiliar, destino, origen);
}

int main() {
    int numDiscos;

    // Pedimos al usuario el número de discos
    cout << "Ingrese el número de discos: ";
    cin >> numDiscos;

    // Llamamos a la función de Hanoi con los valores iniciales (torres 1, 3 y 2 como auxiliar)
    cout << "Los movimientos necesarios son:\n";
    hanoi(numDiscos, 1, 3, 2);

    return 0;
}
