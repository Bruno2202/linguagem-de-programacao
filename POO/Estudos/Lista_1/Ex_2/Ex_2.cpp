#include <iostream>

using namespace std;

#include "Ex_2.h"

int main() {
    string vizinhosBrasil[] = {"Argentina", "Uruguai", "Paraguai", "Bolívia"};

    Pais p1("BRA", "Brasil", 214300000, 8510000);
    p1.setVizinhos(vizinhosBrasil[0]);

    Pais p2("AR", "Aregentina", 45810000, 2780000);

    cout << p1.getVizinhos();
}