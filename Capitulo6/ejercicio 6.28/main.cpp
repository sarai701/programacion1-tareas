#include <iostream>
#include <vector>
using namespace std;

// Función para verificar si un número es perfecto
bool esPerfecto(int numero) {
    int sumaDivisores = 0;
    vector<int> divisores;

    // Encontrar los divisores propios
    for (int i = 1; i <= numero / 2; i++) {
        if (numero % i == 0) {
            sumaDivisores += i;
            divisores.push_back(i);
        }
    }

    // Verificar si el número es perfecto
    if (sumaDivisores == numero) {
        cout << numero << " es perfecto: ";
        for (int i = 0; i < divisores.size(); i++) {
            cout << divisores[i] << " ";
        }
        cout << endl;
        return true;
    }
    return false;
}

int main() {
    // Buscar números perfectos entre 1 y 1000
    cout << "Números perfectos entre 1 y 1500:" << endl;
    for (int i = 1; i <= 1500; i++) {
        esPerfecto(i);
    }
    return 0;
}
