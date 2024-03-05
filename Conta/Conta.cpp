#include <iostream>

using namespace std;

#include "Conta.h"

int main() {
    Conta c1;
    c1.imprimir();

    Conta c2(1, "a", 1, 1);
    c2.imprimir();
    
    Conta c3(2, "b", 2);
    c3.imprimir();

    c1.setId(123);
    c1.setBanco("FEMA BANK");
    c1.imprimir();

    // INCORRETO: a main() não pertence a classe, por conta disso ela não pode alterar dessa maneira (infringe regra do encapsulamento)
    // isso ocorre quando os atributos  estão public
    // c1.id = 123;
}