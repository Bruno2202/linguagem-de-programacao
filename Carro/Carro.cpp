#include <iostream>

using namespace std;

#include "Carro.h"

int main() {
    //Instanciação de objeto: Vinculação dos métodos aos métodos

    Carro car1; // Instanciação do objeto car1(objeto) do tipo Carro;
    car1.ler(); // Execução do método ler para car1;
    car1.imprimir(); // Execução do método imprimir para car1;

    Carro car2;
    car2.ler();
    car2.imprimir();

    cout << "Modelo: " << carl1.getModelo() << endl;
}