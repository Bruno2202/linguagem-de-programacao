class Data {
    private:
        int dia, mes, ano;

    public:
        Data() : dia(22), mes(2), ano(2005) {};                 // <- CONSTRUTOR PADRÃO
        Data(int, int, int);                                    // <- CONSTRUTOR PARAMENTRIZADO
        
        ~Data() { cout << "O OBEJTO FOI DESTRUIDO" << endl; };  // <- DESTRUTOR com mensagem

        int getDia() {return dia;};     // <- 'get', função inline para obter o dia
        int getMes() {return mes;};     // <-  =                              = mes
        int getAno() {return ano;};     // <-  =                              = ano

        void setDia(int);
        void setMes(int);
        void setAno(int);

        void ler();
        void imprimir();
};


Data::Data(int dia, int mes, int ano) {     // <- CONSTRUTOR padrão parametrizado
    this->dia = dia;
    this->mes = mes;
    this->ano = ano;
}


void Data::ler() {
    cout << "Informe o dia: " << endl;
    cin >> dia;
    cout << "Informe o mes: " << endl;
    cin >> mes;
    cout << "Informe o ano: " << endl;
    cin >> ano;
    cout << endl;
}

void Data::imprimir() {
    cout << "Data informada: " << dia << "/" << mes << "/" << ano << endl << endl;
}


void Data::setDia(int dia) {
    if (dia <= 0 || dia >= 32) {
        cout << "Valor inserido para dia e invalido: " << dia << endl;
        this->dia = 1;
    } else {
        this->dia = dia; 
    }
}

void Data::setMes(int mes) {
    if (mes <= 0 || mes >= 13) {
        cout << "Valor inserido para mes e invalido: " << mes << endl;
         this->mes = 1;
    } else {
        this->mes = mes;
    }
}

void Data::setAno(int ano) {
    if (ano < 1900 || ano > 2100) {
        cout << "Valor inserido para ano e invalido: " << ano << endl;
        this->ano = 2000;
    } else {
        this->ano = ano;
    }
}