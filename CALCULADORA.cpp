#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char operacion;

    cout << "=== Calculadora basica ===\n";
    cout << "Ingresa el primer numero: ";
    cin >> num1;

    cout << "Ingresa la operacion (+, -, *, /): ";
    cin >> operacion;

    cout << "Ingresa el segundo numero: ";
    cin >> num2;

    switch (operacion) {
        case '+':
            cout << "Resultado: " << num1 + num2 << endl;
            break;
        case '-':
            cout << "Resultado: " << num1 - num2 << endl;
            break;
        case '*':
            cout << "Resultado: " << num1 * num2 << endl;
            break;
        case '/':
            if (num2 != 0)
                cout << "Resultado: " << num1 / num2 << endl;
            else
                cout << "Error: Division entre cero no permitida.\n";
            break;
        default:
            cout << "Operación no valida.\n";
    }

    return 0;
}
