//Classe Carro
class Carro {
    //Atributos
    private: 
    //private: dados estão encapsulados, os atributos só podem ser alterados por métodos da classe;
    //public: dados NÃO estão encapsulados, qualquer método pode alterar os atributos da classe;
        int id;
        string modelo;
        int ano;
        string cor;
        float valor;

        //Métodos
        public: 
        //Devemos deixar como public para podermos acessar os métodos a parti da main
            void ler();
            void imprimir();    

            string getModelo();
};

//Métodos
void Carro::ler() {
    cout << "Ler dados de carro" << endl;
    cout << "ID: " << endl; 
    cin >> id ;
    cout << "Modelo: "  << endl;
    cin >> modelo;
    cout << "Ano: " << endl;
    cin >> ano;
    cout << "Cor: " << endl;
    cin >> cor;
    cout << "Valor: R$ " << endl;
    cin >> valor;
    cout << endl;
}

void  Carro::imprimir() {
    cout << "Imprimir dados de carro" << endl;
    cout << "ID: " << id << endl; 
    cout << "Modelo: " << modelo << endl;
    cout << "Ano: " << ano << endl;
    cout << "Cor: " << cor << endl;
    cout << "Valor: R$ " << valor << endl;
    cout << endl;
}

void Carro::getModelo() {
    return this->modelo;
}

// void desconto();
