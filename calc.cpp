#include <iostream>
#include <limits>

using namespace std;

int main() {
    char op;
    double num1, num2;

    cout << "=============================\n";
    cout << "    Calculadora Simples\n";
    cout << "=============================\n\n";

    cout << "Digite o primeiro numero: ";
    while (!(cin >> num1)) {
        cout << "Entrada invalida. Por favor, digite um numero: ";
        cin.clear(); 
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
    }
    
    cout << "Digite um operador (+, -, *, /): ";
    cin >> op;

    cout << "Digite o segundo numero: ";
    while (!(cin >> num2)) {
        cout << "Entrada invalida. Por favor, digite um numero: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    cout << "\nResultado: ";

    switch (op) {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
            break;
        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
            break;
        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
            break;
        case '/':
            if (num2 != 0) {
                cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
            } else {
                cout << "Erro! Divisao por zero nao e permitida." << endl;
            }
            break;
        default:
            cout << "Operador invalido! Use apenas +, -, * ou /." << endl;
            break;
    }
    
    cout << "\n";

    return 0;
}