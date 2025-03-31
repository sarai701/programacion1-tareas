#include <iostream>
using namespace std;

bool esMultiplo(int a, int b) {
    return b % a == 0; // Verifica si b es m�ltiplo de a
}

int main() {
    int num1, num2;
    char respuesta;

    cout << "PROGRAMA PARA VERIFICAR MULTIPLOS\n";
    cout << "---------------------------------\n";

    do {
        cout << "Ingrese el primer n�mero (base): ";
        cin >> num1;
        cout << "Ingrese el segundo n�mero (a verificar): ";
        cin >> num2;

        // Mostrar el resultado
        if (esMultiplo(num1, num2)) {
            cout << num2 << " es m�ltiplo de " << num1 << endl;
        } else {
            cout << num2 << " no es m�ltiplo de " << num1 << endl;
        }

        cout << "�Desea continuar? (s/n): ";
        cin >> respuesta;

    } while (respuesta == 's' || respuesta == 'S'); // Permitir continuar si la respuesta es s�

    cout << "Programa finalizado. �Gracias por usarlo!" << endl;
    return 0;
}
