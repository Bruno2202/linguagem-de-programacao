class Vinho : public Uva {
    private: 
        int id;
        float valor;
        string nome;
        Fabricante fabricante;

    public:
        Vinho(): Uva(), fabricante(Fabricante()), id(0), valor(0.0), nome("") {};
        Vinho(int, float, string, Fabricante, Uva);

        int getId() {return this->id;}
        float getValor() {return this->valor;}
        string getNome() {return this->nome;}
        Fabricante getFabricante() {return this->fabricante;}

        void setId(int id) {this->id = id;}
        void setValor(float valor) {this->valor = valor;}
        void setNome(string noem) {this->nome = nome;}
        void setFabricante(Fabricante fabricante) {this->fabricante = fabricante;}

        void aumentovalor(float);
        void aumentovalor();
};

Vinho::Vinho(int id, float valor, string nome, Fabricante fabricante, Uva uva): Uva(uva) {
    setId(id);
    setValor(valor);
    setNome(nome);
    setFabricante(fabricante);
}

void Vinho::aumentovalor(float aumento) {
    setValor((getValor() + (getValor() * (aumento/100))));
}

void Vinho::aumentovalor() {
    setValor((getValor() + (getValor() * 0.05)));
}