class Especialidade {
    protected:
        int id, quantidade;
        string descricao;

    public:
        Especialidade();
        Especialidade(int, int, string);

        int getId() {return this->id;}
        int getQuantidade() {return this->quantidade;}
        string getDescricao() {return this->descricao;}
        
        void setId(int id) {this->id = id;}
        void setQuantidade(int quantidade) {this->quantidade = quantidade;}
        void setDescricao(string descricao) {this->descricao = descricao;}

        void imprimir();
        void ler();
};

Especialidade::Especialidade() {
    setId(0);
    setQuantidade(0);
    setDescricao("");
}

Especialidade::Especialidade(int id, int quatidade, string descricao) {
    setId(id);
    setQuantidade(quatidade);
    setDescricao(descricao);
}

void Especialidade::imprimir() {
    cout << "DADOS DA ESPECIALIDADE " << endl
        << "ID: " << getId() << endl
        << "Descricao: " << getDescricao() << endl
        << "Quantidade: " << getQuantidade() << endl << endl;
}

void Especialidade::ler() {
    cout << "INFORME OS DADOS DA ESPECIALIDADE " << endl;
    cout << "ID: " << endl;
    cin >> id;
    cout << "Descricao: " << endl;
    cin >> descricao;
    cout << "Quantidade: " << endl;
    cin >> quantidade;
    cout << endl;
}