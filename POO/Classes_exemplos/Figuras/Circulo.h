#ifndef IFIGURA_H
    #include "IFigura.h"
#endif

#ifndef CIRCULO_H
    #define CIRCULO_H
#endif

class Circulo: public IFigura {
    private:
        float raio;
    
    public:
        Circulo(): raio(0){}
        Circulo(float raio): raio(raio){}

        float getRaio() const {return this->raio;}
        void setRaio(float raio) {this->raio = raio;}

        float area() {return 3.141592 * raio * raio;}
        float perimetro() {return 2 * 3.141592 * raio;}
};
