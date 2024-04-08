#include <iostream>

using namespace std;

#include "IForma.h"
#include "Quadrado.h"
#include "Circulo.h"


int main()
{
    Quadrado quadrado (4);
    cout << "Area: " << quadrado.area();

    Circulo circulo (4);
    cout << "Area Circulo: " << circulo.area () << endl;
    cout << "Perimetro Circulo: " << circulo.perimetro () << endl;
}
