

class Quadrado: public IForma{
    private:
        float tamanho;
    public:
        Quadrado(): tamanho(0){}
        Quadrado(int tamanho): tamanho(tamanho){}
        float area() {
            return (tamanho * tamanho);
        }

        float perimetro(){
            return tamanho *4;
        }


};
