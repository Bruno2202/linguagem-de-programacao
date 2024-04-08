class Imovel : public TipoImovel {
    private:
        int id;
        string rua, bairro, cidade;
        bool ocupado;

    public: 
        Imovel(): TipoImovel(), id(0), rua(""), bairro(""), cidade(""), ocupado(false) {}
        Imovel(int, string, string, string, bool, TipoImovel);

        int getId() {return id;}
        string getRua() {return rua;}
        string getBairro() {return bairro;}
        string getCidade() {return cidade;}
        bool getOcupado() {return ocupado;}

        void setId(int id) {this->id = id;}
        void setRua(string rua) {this->rua = rua;}
        void setBairro(string bairro) {this->bairro = bairro;}
        void setCidade(string cidade) {this->cidade = cidade;}
        void setOcupado(bool ocupado) {this->ocupado = ocupado;}

        void imprimirImovel();
        void lerImovel();
};

Imovel::Imovel(int id, string rua, string bairro, string cidade, bool ocupado, TipoImovel tipoImovel): TipoImovel(tipoImovel) {
    setId(id);
    setRua(rua);
    setBairro(bairro);
    setCidade(cidade);
    setOcupado(ocupado);
}

void Imovel::imprimirImovel() {
    cout << "----DADOS DO IMOVEL----" << endl
        << "ID: " << getId() << endl
        << "Rua: " << getRua() << endl
        << "Bairro: " << getBairro() << endl
        << "Cidade: " << getCidade() << endl 
        << "Ocupado: " << (getOcupado() ? "Sim" : "Nao") << endl
        << "Tipo do imovel: " << TipoImovel::descricao << endl << endl;
}

void Imovel::lerImovel() {
    cout << "INFORME OS DADOS DO IMOVEL" << endl;
    cout << "ID: " << endl;
    cin >> id;
    cout << "Rua: " << endl;
    cin >> rua;
    cout << "Bairro: " << endl;
    cin >> bairro;
    cout << "Cidade: " << endl;
    cin >> cidade;
    cout << "Ocupado: " << endl;
    cin >> ocupado;
    cout << "ID - Tipo imovel: " << endl;
    cin >> TipoImovel::id;
    cout << "Descricao - Tipo imovel: " << endl;
    cin >> TipoImovel::descricao;
    cout << endl;
}