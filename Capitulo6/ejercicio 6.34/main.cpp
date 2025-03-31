#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    // Inicializar semilla para números aleatorios
    srand(static_cast<unsigned int>(time(0)));

    // Generar número aleatorio entre 1 y 1000
    int numeroSecreto = rand() % 1000 + 1;
    int intento;
    int intentos = 0;

    cout << "JUEGO: ADIVINA EL NUMERO\n";
    cout << "------------------------\n";
    cout << "Tengo un numero entre 1 y 1000.\n";
    cout << "Puedes adivinar mi numero?\n";
    cout << "Por favor escribe tu primera respuesta: ";

    do {
        cin >> intento;
        intentos++;

        if (intento > numeroSecreto) {
            cout << "Demasiado alto. Intenta de nuevo: ";
        } else if (intento < numeroSecreto) {
            cout << "Demasiado bajo. Intenta de nuevo: ";
        }
    } while (intento != numeroSecreto);

    cout << "\n¡Excelente! ¡Adivinaste el numero en " << intentos << " intentos!\n";

    // Mensaje especial según el número de intentos
    if (intentos < 10) {
        cout << "¡Eres muy bueno en esto o tuviste mucha suerte!\n";
    } else if (intentos < 20) {
        cout << "¡Buen trabajo!\n";
    } else {
        cout << "¡Sigue practicando, puedes hacerlo mejor!\n";
    }

    return 0;
}
