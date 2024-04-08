#include <iostream>

using namespace std;

int main() {
    float base, altura;

    cout << "Digite o valor da base do triangulo: ";
    cin >> base;

    while (base <= 0) {
        cout << "Valor invalido! A base do triangulo deve ser maior que zero." << endl;
        cout << "Digite o valor da base do triangulo: ";
        cin >> base;
    }

    cout << "Digite o valor da altura do triangulo: ";
    cin >> altura;

    while (altura <= 0) {
        cout << "Valor invalido! A altura do triângulo deve ser maior que zero." << endl;
        cout << "Digite o valor da altura do triângulo: ";
        cin >> altura;
    }

    float area = (base * altura) / 2;

    cout << "A area do triângulo e: " << area << endl;

    return 0;
}
