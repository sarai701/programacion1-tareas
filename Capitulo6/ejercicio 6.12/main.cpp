#include <iostream>
#include <iomanip>

using namespace std;

double calcularTarifa(double horas) {
    if (horas <= 3) {
        return 2.0;
    }
    double costo = 2.0 + (horas - 3) * 0.5;
    return (costo > 10.0) ? 10.0 : costo;
}

int main() {
    const int NUM_AUTOS = 3;
    double horas, totalHoras = 0, totalCargos = 0;

    cout << "Sistema de cobro de estacionamiento\n";
    cout << "-----------------------------------\n";

    for (int i = 1; i <= NUM_AUTOS; i++) {
        cout << "Ingrese las horas para el auto " << i << ": ";
        cin >> horas;

        double cargo = calcularTarifa(horas);
        totalHoras += horas;
        totalCargos += cargo;

        cout << "Auto " << i << " - Horas: " << fixed << setprecision(1) << horas
             << " - Cargo: $" << fixed << setprecision(2) << cargo << endl;
    }

    cout << "-----------------------------------\n";
    cout << "Total de horas: " << totalHoras << " - Total cobrado: $" << totalCargos << endl;

    return 0;
}
