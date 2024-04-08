class Especialidade {
    private:
        int id, qtd;
        string descricao;

    public:
        Especialidade();
        Especialidade(int, int, string);

        int getId() {return id;};
        int getQtd() {return qtd;};
        string getDescricao() {return descricao;};

        void setId(int);
        void setQtd(int);
        void setDescricao(string);

        void imprimir();
        void ler();

        ~Especialidade() {};
};

Especialidade::Especialidade() {
    this->id = 0;
    this->qtd = 0;
    this->descricao = "";
}

Especialidade::Especialidade(int id, int qtd, string descricao) {
    this->id = id;
    this->qtd = qtd;
    this->descricao = descricao;
}

void Especialidade::setId(int id) {
    this->id = id;
}

void Especialidade::setQtd(int qtd) {
    this->qtd = qtd;
}

void Especialidade::setDescricao(string descricao) {
    this->descricao = descricao;  
}

void Especialidade::imprimir() {
    cout << "ESPECIALIDADE: " << endl 
        << "ID: " << id << endl
        << "Quantidade: " << qtd << endl
        << "Descricao: " << descricao << endl << endl;
}

void Especialidade::ler() {
    cout << "Informe as ESPECIALIDADES: " << endl;
    cout << "ID: " << endl; 
    cin >> id;
    cout << "Quantidade: " << endl; 
    cin >> qtd;
    cout << "Descricao: " << endl; 
    cin >> descricao;
    cout << endl << endl;
}