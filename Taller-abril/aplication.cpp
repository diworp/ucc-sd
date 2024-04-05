#include <iostream>

using namespace std;

int main() {
    char operador;
    double num1, num2;

    cout << "Ingrese el primer número: ";
    cin >> num1;

    cout << "Ingrese el operador (+, -, *, /): ";
    cin >> operador;

    cout << "Ingrese el segundo número: ";
    cin >> num2;

    double resultado;

    switch(operador) {
        case '+':
            resultado = num1 + num2;
            break;
        case '-':
            resultado = num1 - num2;
            break;
        case '*':
            resultado = num1 * num2;
            break;
        case '/':
            if(num2 != 0)
                resultado = num1 / num2;
            else {
                cout << "Error: No se puede dividir por cero." << endl;
                return 1;
            }
            break;
        default:
            cout << "Operador no válido." << endl;
            return 1;
    }

    cout << "El resultado es: " << resultado << endl;

    return 0;
}