class Profissional : public Especialidade{
    private:
        int id;
        string nome, nascimento;

    public:
        Profissional();
        Profissional(int, string, string, int, int, string);
        Profissional(int, string, string, Especialidade);

        int getId() { return this->id; }
        string getNome() { return this->nome; }
        string getNascimento() { return this->nascimento; }

        void setId(int id) { this->id = id; }
        void setNome(string nome) { this->nome = nome; }
        void setNascimento(string nascimento) { this->nascimento = nascimento; }

        void imprimir();
        void ler();
};

Profissional::Profissional() {
    this->id = 0;
    this->nome = "";
    this->nascimento = "";
    Especialidade::id = 0;
    Especialidade::quantidade = 0;
    Especialidade::descricao = "";
}

// Parametrizado 1
Profissional::Profissional(int idProf, string nome, string nascimento, int idEsp, int quantidade, string descricao) {
    this->id = idProf;
    this->nome = nome;
    this->nascimento = nascimento;
    Especialidade::id = idEsp;
    Especialidade::quantidade = quantidade;
    Especialidade::descricao = descricao;
}

// Parametrizado 2: Recebe um objeto (especialida)
Profissional::Profissional(int idProf, string nome, string nascimento, Especialidade especialidade) : Especialidade(especialidade) {
    this->id = idProf;
    this->nome = nome;
    this->nascimento = nascimento;
}

void Profissional::imprimir() {
    cout << "----DADOS DO PROFISSIONAL----" << endl
         << "ID profissional: " << this->id << endl
         << "Nome: " << this->nome << endl
         << "Nascimento: " << this->nascimento << endl
         << "ID Especialidade: " << Especialidade::id << endl
         << "Quantidade de especialidades: " << Especialidade::quantidade << endl
         << "Descricacao especialidade: " << Especialidade::descricao << endl
         << endl;
}

void Profissional::ler() {
    cout << "INFORME OS DADOS DO PROFISSIONAL" << endl;
    cout << "ID profissional: " << endl;
    cin >> id;
    cout << "Nome: " << endl;
    cin >> nome;
    cout << "Nascimento: " << endl;
    cin >> nascimento;
    cout << "ID Especialiade: " << endl;
    cin >> Especialidade::id;
    cout << "Quantidade de especialidades: " << endl;
    cin >> Especialidade::quantidade;
    cout << "Descricacao especialidade: " << endl;
    cin >> Especialidade::descricao;
    cout << endl;
}