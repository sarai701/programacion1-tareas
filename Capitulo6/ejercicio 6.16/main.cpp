#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Función para generar un número aleatorio en un rango dado
int numeroAleatorio(int min, int max) {
    return min + rand() % (max - min + 1);
}

int main() {
    srand(time(0)); // Inicializar la semilla aleatoria

    cout << "a) " << numeroAleatorio(1, 2) << endl;
    cout << "b) " << numeroAleatorio(1, 100) << endl;
    cout << "c) " << numeroAleatorio(0, 9) << endl;
    cout << "d) " << numeroAleatorio(1000, 1112) << endl;
    cout << "e) " << numeroAleatorio(-1, 1) << endl;
    cout << "f) " << numeroAleatorio(-3, 11) << endl;

    return 0;
}
