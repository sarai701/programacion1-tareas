#include <iostream>
using namespace std;

int invertirDigitos(int numero) {
    int invertido = 0;

    // Continuar hasta que el número sea 0
    while (numero > 0) {
        // Obtener el último dígito
        int digito = numero % 10;
        // Agregar el dígito al número invertido
        invertido = invertido * 10 + digito;
        // Eliminar el último dígito del número original
        numero /= 10;
    }

    return invertido;
}

int main() {
    int numero;

    // Entrada de datos
    cout << "Ingrese un número entero: ";
    cin >> numero;

    // Invertir los dígitos del número
    int numeroInvertido = invertirDigitos(numero);

    // Mostrar el resultado
    cout << "El número invertido es: " << numeroInvertido << endl;

    return 0;
}
