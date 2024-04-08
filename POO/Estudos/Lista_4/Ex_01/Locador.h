class Locador : public Profissao {
    private:
        int id, idade;
        float salario;
        string nome, cidade, estado;

    public:
        Locador(): Profissao(), id(0), idade(0), salario(0.0), nome(""), cidade(""), estado("") {};
        Locador(int, string, string, string, int, float, Profissao);

        int getId() {return id;}
        string getNome() {return nome;}
        string getCidade() {return cidade;}
        string getEstado() {return estado;}
        int getIdade() {return idade;}
        float getSalario() {return salario;}

        void setId(int id) {this->id = id ;}
        void setNome(string nome) {this->nome = nome;}
        void setCidade(string cidade) {this->cidade = cidade;}
        void setEstado(string estado) {this->estado = estado;}
        void setIdade(int idade) {this->idade = idade;}
        void setSalario(float salario) {this->salario = salario;}

        void imprimir();
        void ler();
};

Locador::Locador(int id, string nome, string cidade, string estado, int idade, float salario, Profissao profissao): Profissao(profissao) {
    setId(id);
    setNome(nome);
    setCidade(cidade);
    setEstado(estado);
    setIdade(idade);
    setSalario(salario);
}

void Locador::imprimir() {
    cout << "----DADOS DO LOCADOR----" << endl
        << "ID: " << getId() << endl
        << "Nome: " << getNome() << endl
        << "Idade: " << getIdade() << endl
        << "Cidade: " << getCidade() << endl
        << "Estado: " << getEstado() << endl
        << "Salario: " << getSalario() << endl 
        << "Profissao: " << Profissao::descricao << endl << endl;
}

void Locador::ler() {
    cout << "INFORME OS DADOS DO LOCADOR" << endl;
    cout << "ID:" << endl;
    cin >> id;
    cout << "Nome:" << endl;
    cin >> nome;
    cout << "Idade:" << endl;
    cin >> idade;
    cout << "Cidade:" << endl;
    cin >> cidade;
    cout << "Estado:" << endl;
    cin >> estado;
    cout << "Salario" << endl;
    cin >> salario;
    cout << endl;
}