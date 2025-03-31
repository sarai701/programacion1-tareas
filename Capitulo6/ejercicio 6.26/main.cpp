#include <iostream>
#include <iomanip>

using namespace std;

// Función para convertir Fahrenheit a Celsius
float fahrenheitACentigrados(float fahrenheit) {
    return (5.0 / 9.0) * (fahrenheit - 32);
}

// Función para convertir Celsius a Fahrenheit
float centigradosAFahrenheit(float celsius) {
    return (9.0 / 5.0) * celsius + 32;
}

void mostrarTablaConversions() {
    // Tabla de Celsius a Fahrenheit
    cout << "TABLA DE CONVERSIONES\n";
    cout << "---------------------------\n";
    cout << "Celsius  | Fahrenheit\n";
    cout << "---------------------------\n";
    for (int celsius = 0; celsius <= 100; celsius += 10) {
        cout << setw(3) << celsius << "°C    | " << fixed << setprecision(1) << centigradosAFahrenheit(celsius) << "°F\n";
    }
    cout << "---------------------------\n";

    // Tabla de Fahrenheit a Celsius
    cout << "Fahrenheit | Celsius\n";
    cout << "---------------------------\n";
    for (int fahren = 32; fahren <= 212; fahren += 20) {
        cout << setw(3) << fahren << "°F    | " << fixed << setprecision(1) << fahrenheitACentigrados(fahren) << "°C\n";
    }
    cout << "---------------------------\n";
}

int main() {
    mostrarTablaConversions();
    return 0;
}

