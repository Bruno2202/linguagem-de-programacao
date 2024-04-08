class Uva {
    protected:
        int id;
        string nome, cor;
        Pais pais;

    public:
        Uva(): pais(Pais()), id(0), nome(""), cor("")  {};
        Uva(int, string, string, Pais);

        int getId() {return this->id;}
        string getNome() {return this->nome;}
        string getCor() {return this->cor;}

        void setId(int id) {this->id = id;}
        void setNome(string nome) {this->nome = nome;}
        void setCor(string cor) {this->cor = cor;}
};

Uva::Uva(int id, string nome, string cor, Pais pais) {
    setId(id);
    setNome(nome);
    setCor(cor);
}