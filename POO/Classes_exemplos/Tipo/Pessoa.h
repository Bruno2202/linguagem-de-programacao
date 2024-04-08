class Pessoa: public Tipo { // <- Pessoa está herdando a classe "Tipo"
    private:
        int id;
        string nome;
        int idade;

    public:
        Pessoa(): Tipo(), id(0), nome(""), idade(0) {} 
        Pessoa(int, string, int, Tipo)

        int getId() {return this->id;}

        void imprimir();
};

void Pessoa::imprimir() {
    cout << "ID: " << this->id << endl;
    cout << "Nome: " << this->nome << endl;
    cout << "Idade: " << this->idade << endl;
    cout << "Tipo: " << Tipo::getId() << "-" << Tipo::descricao << endl;
}

Pessoa::Pessoa(int id, string nome, int idade, Tipo tipo) { // <- passagem do objeto tipo para Tipo
    this->id = id;
    this->nome = nome;
    this->idade = idade;
    this->Tipo::id = tipo.getId();
    this->Tipo::descricao = tipo.getDescricao();
}