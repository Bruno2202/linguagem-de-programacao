#ifndef IFIGURA_H
    #define IFIGURA_H
#endif

class IFigura {
    public:
        virtual float area() = 0; // virtual: a função é virtual, ou seja, ela não é implementada nessa classe. A classe que herdar deve implementar esse método
        virtual float perimetro() = 0;
};