class Profissao {
    protected:
        int id;
        string descricao;
    public:
        Profissao(): id(0), descricao("") {};
        Profissao(int, string);  

        int getId() {return id;}
        string getDescricao() {return descricao;}

        void setId(int id) {this->id = id;}
        void setDescricao(string descricao) {this->descricao = descricao;}

        void imprimirProfissao();
        void ler();
};

Profissao::Profissao(int id, string descricao) {
    this->id = id; 
    this->descricao = descricao;
}

void Profissao::imprimirProfissao() {
    cout << "----PROFISSAO----" << endl
        << "ID: " << getId() << endl
        << "Descricao: " << getDescricao() << endl << endl;
}

void Profissao::ler() {
    cout << "INFORME OS DADOS DA PROFISSAO" << endl;
    cout << "ID: " << endl;
    cin >> id;
    cout << "Descricao: " << endl;
    cin >> descricao;
    cout << endl;
}


