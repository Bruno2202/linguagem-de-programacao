class Tarefa : public TipoTarefa {
    protected: 
        int id;
        string descricao;
        float vlrHora, qtdTrabalhada;

    public:
        Tarefa();
        Tarefa(int, string, float, float, TipoTarefa);

        int getId() {return this->id;}
        string getDescricao() {return this->descricao;} 
        float getVlrHora() {return this->vlrHora;}
        float getQtdTrabalhada() {return this->qtdTrabalhada;}

        void setId(int id) {this->id = id;}
        void setDescricao(string descricao) {this->descricao = descricao;}
        void setVlrHora(float vlrHora) {this->vlrHora = vlrHora;}
        void setQtdTrabalhada(float qtdTrabalhada) {this->qtdTrabalhada = qtdTrabalhada;}

        void imprimir();
        void ler();
};

Tarefa::Tarefa() {
    this->id = 0;
    this->descricao = "";
    this->vlrHora = 0;
    this->qtdTrabalhada = 0;
    TipoTarefa::id = 0;
    TipoTarefa::descricao = "";
}

Tarefa::Tarefa(int id, string descricao, float vlrHora, float qtdTrabalhada, TipoTarefa tipoTarefa): TipoTarefa(tipoTarefa) {
    this->id = id;
    this->descricao = descricao;
    this->vlrHora = vlrHora;
    this->qtdTrabalhada = qtdTrabalhada;
}

void Tarefa::imprimir() {
    cout << "----DADOS DA TAREFA----" << endl
        << "ID tarefa: " << this->id << endl
        << "Descricao: " << this->descricao << endl
        << "vlrHora: " << this->vlrHora << endl
        << "Quantidade de horas trabalhadas: " << this->qtdTrabalhada << endl
        << "ID do tipo da tarefa: " << TipoTarefa::id << endl
        << "Descricao do tipo da tarefa: " << TipoTarefa::descricao << endl << endl;
}

void Tarefa::ler() {
    cout << "INFORME OS DADOS DA TAREFA" << endl;
    cout << "ID profissional: " << endl;
    cin >> id;
    cout << "Descricao: " << endl;
    cin >> descricao;
    cout << "Valor por hora: " << endl;
    cin >> vlrHora;
    cout << "ID do Tipo da tarefa: " << endl;
    cin >> TipoTarefa::id;
    cout << "Descricao do tipo da tarefa: " << endl;
    cin >> TipoTarefa::descricao;
    cout << endl;
}

