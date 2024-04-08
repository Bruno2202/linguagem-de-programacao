#include <iostream>

using namespace std;

#include "Ex_1.h"

int main() {
    Data d1;    // Utilizando CONSTRUTOR PADRÃO
    cout << "Data do objeto D1" << endl;
    d1.imprimir();
    cout << endl;

    Data d2(10, 3, 2024);   // Utilizando CONSTRUTOR PARAMETRIZADO
    cout << "Data do objeto D2" << endl;
    d2.imprimir();
    cout << endl;

    Data d3;    // Utilizando contrutor padrão mas com LEITURA DE ATRIBUTOS
    d3.ler();
    cout << "Data do objeto D3" << endl;
    d3.imprimir();

    cout << "Data do objeto D3 obtida com 'get': " << endl;
    cout << "Dia: " << d3.getDia() << endl;
    cout << "Mes: " << d3.getMes() << endl;
    cout << "Ano: " << d3.getAno() << endl;
    cout << endl << endl;

    Data d4;
    // Troque o valor da data dentro dos parenteses:
    d4.setDia(11);      
    d4.setMes(8);
    d4.setAno(2001);
    cout << "Data do objeto D4 feita por meio de 'set': "  << endl;
    d4.imprimir();
    cout << endl;

    Data d5(10, 2, 2005);
    cout << "Dia do objeto D5 + 10: " << 
    endl << "Valor pr3 setado: " << d5.getDia() <<
    endl << "Valor do dia + 10: " << (d5.getDia() + 10) << 
    endl << endl << endl;

    Data d6(22, 2, 2005);
    cout << "Data do objeto d6: " << endl;
    d6.imprimir();
    cout << "Data do objeto d6 apos 'set': " << endl;
    d6.setDia(321);
    d6.imprimir();
}