class Locacao {
    private:
        int id;
        float valor;
        string data;
        Imovel imovel;
        Locador locador;
        
    public:
        Locacao(): id(0), valor(0), data(""), imovel(Imovel()), locador(Locador()) {}; 
        Locacao(int, float, string, Imovel, Locador);

        int getId() {return id;}
        float getValor() {return valor;}
        string getData() {return data;}
        Imovel getImovel() {return imovel;}
        Locador getLocador() {return locador;}

        void setId(int id) {this->id = id;}
        void setValor(float valor) {this->valor = valor;}
        void setData(string data) {this->data = data;}
        void setImovel(Imovel imovel) {this->imovel = imovel;}
        void setLocador(Locador locador) {this->locador = locador;}

        void imprimirLocacao();
        void lerLocacao();
        void aumentoPadrao();
        void aumentoValor(float);
};

Locacao::Locacao(int id, float valor, string data, Imovel imovel, Locador locador) {
    setId(id);
    setValor(valor);
    setData(data);
    setImovel(imovel);
    setLocador(locador);
}

void Locacao::imprimirLocacao() {
    cout << "====DADOS DA LOCACAO====" << endl
        << "ID: " << getId() << endl
        << "Valor: " << getValor() << endl
        << "Data da locacao: " << getData() << endl
        << "\t----DADOS DO LOCADOR----" << endl
        << "\tNome: " << getLocador().getNome() << endl
        << "\tIdade: " << getLocador().getIdade() << endl
        << "\tSalario: " << getLocador().getSalario() << endl 
        << "\tCidade: " << getLocador().getCidade() << endl
        << "\tEstado: " <<getLocador(). getEstado() << endl
        << "\t----DADOS DO IMOVEL----" << endl  
        << "\tCidade: " << getImovel().getCidade() << endl
        << "\tCidade: " << getImovel().getBairro() << endl
        << "\tCidade: " << getImovel().getRua() << endl
        << "\tCidade: " << getImovel().getDescricao() << endl << endl;
}

void Locacao::lerLocacao() {
    cout << "INFORME OS DADOS DA LOCACAO" << endl;
    cout << "ID: " << endl;
    cin >> id;
    cout << "Valor";
    cin >> valor;
    cout << "Data: ";
    cin >> data;
    cout << endl;
}

void Locacao::aumentoPadrao() {
    float novoValor = getValor() + getValor()*0.12;
    setValor(novoValor);
}

void Locacao::aumentoValor(float valorAumento) {
    float novoValor = getValor() + valorAumento;
    setValor(novoValor);
}
