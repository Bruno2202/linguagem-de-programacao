
class Circulo:public  IForma{
     private:
        float raio;
     public:
        Circulo(): raio(0){}
        Circulo(float r): raio(r){ }

        float area() { return (3.14 * (raio*raio)); }
        float perimetro() {return 2 *3.14* raio; }

};
