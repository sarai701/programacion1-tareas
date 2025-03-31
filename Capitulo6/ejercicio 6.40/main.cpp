#include <iostream>
using namespace std;

// Funci�n recursiva para calcular el factorial con visualizaci�n
int factorial(int n, int nivel = 0) {
    // Crear sangr�a seg�n el nivel de recursi�n
    string indent(nivel * 4, ' ');

    // Mostrar el estado actual de la llamada
    cout << indent << "Llamando a factorial(" << n << ")" << endl;

    // Caso base
    if (n == 0) {
        cout << indent << "Retornando 1 (caso base alcanzado)" << endl;
        return 1;
    }

    // Llamada recursiva
    int resultado = n * factorial(n - 1, nivel + 1);

    // Mostrar el resultado antes de retornar
    cout << indent << "Retornando " << resultado << " (porque " << n << " * factorial(" << n - 1 << "))" << endl;

    return resultado;
}

int main() {
    int num;

    // Pedimos al usuario el n�mero
    cout << "Ingrese un n�mero para calcular su factorial: ";
    cin >> num;

    // Llamamos a la funci�n factorial
    cout << "\nProceso de c�lculo del factorial:\n";
    int resultado = factorial(num);

    // Mostramos el resultado final
    cout << "\nEl factorial de " << num << " es: " << resultado << endl;

    return 0;
}
