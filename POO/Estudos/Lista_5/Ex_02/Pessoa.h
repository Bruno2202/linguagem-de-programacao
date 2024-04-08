class Pessoa {
    private:
        int idade;
        string nome;

    public:
        Pessoa(): idade(0), nome("") {};
        Pessoa(int, string);

        void lerPessoa();
        void impPessoa();

        string retNome() const {return this->nome;}
        int retIdade() const {return this->idade;}
        void setNome(string nome) {this->nome = nome;}
        void setIdade(int idade) {this->idade = idade;}
};

Pessoa::Pessoa(int idade, string nome) {
    setIdade(idade);
    setNome(nome);
}

void Pessoa::lerPessoa() {
    cout << "Nome: " << endl;
    cin >> nome;
    cout << "Idade: " << endl;
    cin >> idade;
    cout << endl;
}

void Pessoa::impPessoa() {
    cout << "====DADOS DA PESSOA====" << endl
        << "Nome: " << retNome() << endl
        << "Idade: " << retIdade() << endl << endl;
}


