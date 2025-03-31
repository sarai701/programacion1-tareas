#include <iostream>
using namespace std;

// Función recursiva para calcular el factorial con visualización
int factorial(int n, int nivel = 0) {
    // Crear sangría según el nivel de recursión
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

    // Pedimos al usuario el número
    cout << "Ingrese un número para calcular su factorial: ";
    cin >> num;

    // Llamamos a la función factorial
    cout << "\nProceso de cálculo del factorial:\n";
    int resultado = factorial(num);

    // Mostramos el resultado final
    cout << "\nEl factorial de " << num << " es: " << resultado << endl;

    return 0;
}
