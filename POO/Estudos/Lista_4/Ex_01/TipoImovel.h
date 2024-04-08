class TipoImovel {
    protected:
        int id;
        string descricao;
    
    public:
        TipoImovel(): id(0), descricao("") {};
        TipoImovel(int, string); 

        int getId() {return id;}
        string getDescricao() {return descricao;}

        void setId(int id) {this->id = id;}
        void setDescricao(string descricao) {this->descricao = descricao;}

        void imprimirTipoImovel();
        void ler(); 
};

TipoImovel::TipoImovel(int id, string descricao) {
    setId(id);
    setDescricao(descricao);
}

void TipoImovel::imprimirTipoImovel() {
    cout << "----TIPO DO IMOVEL----" << endl
        << "ID: " << getId() << endl
        << "Descricao: " << getDescricao() << endl << endl;
}

void TipoImovel::ler() {
    cout << "INFORME OS DADOS DO TIPO DO IMOVEL" << endl;
    cout << "ID: " << endl;
    cin >> id;
    cout << "Descricao: " << endl;
    cin >> descricao;
    cout << endl;
}
