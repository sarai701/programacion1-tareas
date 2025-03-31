#include <iostream>
using namespace std;

int invertirDigitos(int numero) {
    int invertido = 0;

    // Continuar hasta que el n�mero sea 0
    while (numero > 0) {
        // Obtener el �ltimo d�gito
        int digito = numero % 10;
        // Agregar el d�gito al n�mero invertido
        invertido = invertido * 10 + digito;
        // Eliminar el �ltimo d�gito del n�mero original
        numero /= 10;
    }

    return invertido;
}

int main() {
    int numero;

    // Entrada de datos
    cout << "Ingrese un n�mero entero: ";
    cin >> numero;

    // Invertir los d�gitos del n�mero
    int numeroInvertido = invertirDigitos(numero);

    // Mostrar el resultado
    cout << "El n�mero invertido es: " << numeroInvertido << endl;

    return 0;
}
