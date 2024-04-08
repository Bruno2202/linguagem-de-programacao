class TipoTarefa {
    protected:
        int id;
        string descricao;

    public: 
       TipoTarefa(): id(0), descricao("") {};
       TipoTarefa(int id, string descricao): id(id), descricao(descricao) {};

       int getId() {return this->id;} 
       string getDescricao() {return this->descricao;}

       void setId(int id) {this->id = id;}
       void setDescricao(string descricao) {this->descricao = descricao;}

       void imprimir();
       void ler();
};

void TipoTarefa::imprimir() {
    cout << "DADOS DO TIPO DA TAREFA" << endl
        << "ID: " << getId() << endl
        << "Descricao: " << getDescricao() << endl << endl;
} 

void TipoTarefa::ler() {
    cout << "INFORME OS DADOS DO TIPO DA TAREFA" << endl;
    cout << "ID: " << endl;
    cin >> id;
    cout << "Descricao: " << endl;
    cin >> descricao;
    cout << endl;
} 