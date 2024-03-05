#include <iostream>

using namespace std;

#include "Data.h"

int main() {
    // CONSTRUTOR PADRÃO
    // Data d1;
    // d1.imprimir();

    // CONSTRUTOR PARAMETRIZADO
    // Data d2;
    // d2(2,2,2000);

    // Data d3;
    // cout << "Data: " 
    //     << d1.getDia() << "/" // <-- get (acessa os dados sem infringir o "Encapsulamento");
    //     << d1.getMes() << "/"  
    //     << d1.getAno() << endl << endl; 

    // Data d4;
    // d4(1, 1, 3000); <-- O ano é muito grande, logo, será setado 1900

    Data d5(22,2,2005);
    d5.imprimir();

    Data d6(30,14,3000); // <-- Valores absurdos
    d6.imprimir();
}