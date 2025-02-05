#include <iostream>  
using namespace std;

int main() {
    char operacion;   
    float num1, num2; 
    char continuar;   

    do {
    
        cout << "Calculadora en C++" << endl;
        cout << "Seleccione una operación (+, -, *, /): ";
        cin >> operacion;

        cout << "Ingrese el primer número: ";
        cin >> num1;
        cout << "Ingrese el segundo número: ";
        cin >> num2;

        switch (operacion) {
            case '+':
                cout << "El total es: " << num1 + num2 << endl;
                break;
            case '-':
                cout << "El total es: " << num1 - num2 << endl;
                break;
            case '*':
                cout << "El total es: " << num1 * num2 << endl;
                break;
            case '/':
                if (num2 != 0) { 
                    cout << "El total es: " << num1 / num2 << endl;
                } else {
                    cout << "Error" << endl;
                }
                break;
            default:
                cout << "Intente de nuevo." << endl;
        }

        cout << "¿Realizara otra operación? (s/n): ";
        cin >> continuar;

    } while (continuar == 's' || continuar == 'S'); 

    return 0; 
}