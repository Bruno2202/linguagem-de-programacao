class Data {
    // ATRIBUTOS
    private:
        int dia, mes, ano;

    // MÉTODOS
    public:
        // TIPOS DE CONSTRUTORES (os que dão os valores padrões)
        Data (int, int, int);                                                   // --> costrutor parametrizado ou com argumentos
        //Data();                                                               // --> costrutor pardão (Valor pré setado)
        // Data (): dia(1), mes(1), ano(1900) {};                               // --> costrutor pardão "inline" (Valor pré setado)
        // Data (int dia, int mes, int ano): dia(dia), mes(mes), ano(ano) {};   // --> costrutor parametrizado "inline"


        // MÉTODOS ACESSORES OU "GETS"
        // int getDia();
        int getDia() {return this->dia;} // <-- get "inline"
        int getMes() {return this->mes;}
        int getAno() {return this->ano;}


        // DESTRUTOR
        ~Data();


        // "SETS" <-- diferentes maneiras de fazer
        void setDia(int);

        void setMes() {this->mes = (mes>0 || mes<13) ? mes : 1;}
        void setMes(int);


        void setAno() {this->ano = (ano >=1900 && ano <= 2100) ? ano : 1900;}
        void setAno(int);


        void imprimir();
};


// CONSTRUTOR
Data::Data(int dia, int mes, int ano) { // <-- melhor jeito de fazer
    setDia(dia);
    setMes(mes);
    setAno(ano);
}

// Data::Data() {
//     dia = 1;
//     mes = 1;
//     ano = 1900;
// }

// Data::Data(int dia, int mes, int ano) {
//     this->dia = dia;
//     this->mes = mes;
//     this->ano = ano;
// }


// DESTRUTOR
Data::~Data() {
    cout << endl << endl << "Passei pelo destrutor de data" << endl << endl;
}


// MÉTODOS ACESSORES OU "GETS"
// int Data::getDia() {
//     return this->dia;
// }


//SETS
void Data::setDia(int dia) {
    this->dia = dia;
}

void Data::setMes(int mes) {
    this->mes = mes;
}

void Data::setAno(int ano) {
    // Validação para não conlocar valores absurdos
    // if (ano >=1900 && ano <= 2100) {
    //     this->ano = ano;
    // } else {
    //     this->ano = 1900;
    // }

    // OU

    this->ano = (ano >=1900 && ano <= 2100) ? ano : 1900;
}


void Data::imprimir() {
    cout << "Data: " 
        << this->dia << "/" 
        << this->mes << "/" 
        << this->ano << endl << endl; 

    // "this" está referenciando diretamente ao atributo da classe. 
    // Caso houve um parêmetro na func. e deixassemos sem o "this", 
    // ele iria referenciar ao parâmetro e não ao atributo
}