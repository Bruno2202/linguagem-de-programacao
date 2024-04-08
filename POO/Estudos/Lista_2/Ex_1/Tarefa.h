class Tarefa {
    private:
        int id, tipo, tarefa, qtdeTrabalhada;
        float valorHora;
        string descricao;

    public:
        Tarefa();
        Tarefa(int, int, int, int, float, string);

        int getId() {return id;};
        int getTipo() {return tipo;};
        int getTarefa() {return tarefa;};
        int getQtdeTrabalhada() {return qtdeTrabalhada;};
        float getValorHora() {return valorHora;};
        string getDescricao() {return descricao;};

        void setId(int);
        void setTipo(int);
        void setTarefa(int);
        void setQtdeTrabalhada(int);
        void setValorHora(float);
        void setDescricao(string);

        void imprimir();
        void ler();

        ~Tarefa() {};
};

Tarefa::Tarefa() {
    this->id = 0;
    this->tipo = 0;
    this->tarefa = 0;
    this->qtdeTrabalhada = 0;
    this->valorHora = 0.0;
    this->descricao = ' ';
}

Tarefa::Tarefa(int id, int tipo, int tarefa, int qtdeTrabalhada, float valorHora, string descricao) {
    this->id = id;
    this->tipo = tipo;
    this->tarefa = tarefa;
    this->qtdeTrabalhada = qtdeTrabalhada;
    this->valorHora = valorHora;
    this->descricao = descricao;
}

void Tarefa::setId(int id) {
    this->id = id;
}

void Tarefa::setTipo(int tipo) {
    this->tipo = tipo;
}

void Tarefa::setTarefa(int tarefa) {
    this->tarefa = tarefa;  
}

void Tarefa::setQtdeTrabalhada(int qtdeTrabalhada) {
    this->qtdeTrabalhada = qtdeTrabalhada;  
}

void Tarefa::setValorHora(float valorHora) {
    this->valorHora = valorHora;  
}

void Tarefa::setDescricao(string descricao) {
    this->descricao = descricao;  
}

void Tarefa::imprimir() {
    cout << "TAREFA: " << endl 
        << "ID: " << id << endl
        << "tipo: " << tipo << endl
        << "tarefa: " << tarefa << endl
        << "qtdeTrabalhada: " << qtdeTrabalhada << endl
        << "valorHora: " << valorHora << endl
        << "descricao" << descricao << endl << endl;
}

void Tarefa::ler() {
    cout << "Informe o Tarefa: " << endl;
    cout << "ID: " << endl; 
    cin >> id;
    cout << "tipo: " << endl; 
    cin >> tipo;
    cout << "tarefa: " << endl; 
    cin >> tarefa;
    cout << "qtdeTrabalhada: " << endl; 
    cin >> qtdeTrabalhada;
    cout << "valorHora: " << endl; 
    cin >> valorHora;
    cout << "descricao: " << endl; 
    cin >> descricao;
    cout << endl << endl;
}