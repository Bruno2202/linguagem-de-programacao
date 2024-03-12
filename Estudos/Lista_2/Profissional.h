class Profissional {
    private:
        int id, especialidade;
        string nome, nascimento;

    public:
        Profissional();
        Profissional(int, int, string, string);

        int getId() {return id;};
        int getEspecialidade() {return especialidade;};
        string getNome() {return nome;};
        string getNascimento() {return nascimento;};

        void setId(int);
        void setEspecialidade(int);
        void setNome(string);
        void setNascimento(string);

        void imprimir();
        void ler();

        ~Profissional() {};
};

Profissional::Profissional() {
    this->id = 0;
    this->especialidade = 0;
    this->nome = "";
    this->nascimento = "";
}

Profissional::Profissional(int id, int especialidade, string nome, string nascimento) {
    this->id = id;
    this->especialidade = especialidade;
    this->nome = nome;
    this->nascimento = nascimento;
}

void Profissional::setId(int id) {
    this->id = id;
}

void Profissional::setEspecialidade(int especialidade) {
    this->especialidade = especialidade;
}

void Profissional::setNome(string nome) {
    this->nome = nome;  
}

void Profissional::setNascimento(string nascimento) {
    this->nascimento = nascimento;  
}

void Profissional::imprimir() {
    cout << "Profissional: " << endl 
        << "ID: " << id << endl
        << "Especialidade: " << especialidade << endl
        << "Nome: " << nome << endl
        << "Nascimento" << nascimento << endl << endl;
}

void Profissional::ler() {
    cout << "Informe o Profissional: " << endl;
    cout << "ID: " << endl; 
    cin >> id;
    cout << "Especialidade: " << endl; 
    cin >> especialidade;
    cout << "Nome: " << endl; 
    cin >> nome;
    cout << "Nascimento: " << endl; 
    cin >> nascimento;
    cout << endl << endl;
}