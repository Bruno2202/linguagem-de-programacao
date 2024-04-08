#include <iostream>

using namespace std;

#ifndef IFIGURA_H
    #include "IFigura.h"
#endif

#ifndef QUADRADO_H
    #include "Quadrado.h"
#endif

#ifndef RETANGULO_H
    #include "Retangulo.h"
#endif

#ifndef CIRCULO_H
    #include "Circulo.h"
#endif

int main() {
    Quadrado q1(5);
    cout << "Tamanho Quadrado: " << q1.getTamanho() << endl;
    cout << "Area do Quadrado: " << q1.area() << endl;
    cout << "Perimento do Quadrado: " << q1.perimetro() << endl << endl;

    Retangulo r1(4, 5);
    cout << "Area do reatangulo: " << r1.area() << endl;
    cout << "Perimento do Quadrado: " << r1.perimetro() << endl << endl;

    Circulo c1(5);
    cout << "\nArea Circullo: " << c1.area() << endl;
    cout << "Perimetro do Circulo" << c1.perimetro() << endl << endl; 
}