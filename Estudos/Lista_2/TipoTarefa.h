class TipoTarefa {
    private:
        int id;
        string descricao;

    public:
        TipoTarefa();
        TipoTarefa(int, string);

        int getId() {return id;};
        string getDescricao() {return descricao;};

        void setId(int);
        void setDescricao(string);

        void imprimir();
        void ler();

        ~TipoTarefa() {};
};

TipoTarefa::TipoTarefa() {
    this->id = 0;
    this->descricao = ' ';
}

TipoTarefa::TipoTarefa(int id, string descricao) {
    this->id = id;
    this->descricao = descricao;
}

void TipoTarefa::setId(int id) {
    this->id = id;
}

void TipoTarefa::setDescricao(string descricao) {
    this->descricao = descricao;  
}

void TipoTarefa::imprimir() {
    cout << "TAREFA: " << endl 
        << "ID: " << id << endl
        << "descricao" << descricao << endl << endl;
}

void TipoTarefa::ler() {
    cout << "Informe o Tipo Tarefa: " << endl;
    cout << "ID: " << endl; 
    cin >> id;
    cout << "descricao: " << endl; 
    cin >> descricao;
    cout << endl << endl;
}