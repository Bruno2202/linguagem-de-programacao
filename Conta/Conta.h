class Conta {
    //atributo
    private:  //encapsulamento dos atributos - fora da classe ninguém consegue manipular
        int id;
        string banco;
        int numConta;
        float saldo;

    //métodos
    public:  //métodos publicos para podermos acessar externamente (main por exemplo) 
        Conta();
        Conta(int, string, int, float);
        Conta(int, string, int);

        //métodos de acesso ou gets
        int getId() {
            return this->id;
        }
        string getBanco();
        int getNumConta() {return this->numConta;}
        int getSaldo() {return this->saldo;}


        //métodos modficadores - sets
        void setId(int id) {
            this->id = id;
        }
        void setBanco(string);
        void setNumBanco(int numConta) {this->numConta = numConta;}
        void setSaldo(float saldo) { this->saldo = saldo;}

        void imprimir();
};

string Conta::getBanco() {
    return this->banco;    
}

void Conta::setBanco(string banco) {
    this->banco = banco;
}

Conta::Conta() {
    this->id = 0;
    this->banco = "";
    this->numConta = 0;
    this->saldo = 0;
}

Conta::Conta(int id, string banco, int numConta, float saldo) {
    this->id = id;
    this->banco = banco;
    this->numConta = numConta;
    this->saldo = saldo;
}

Conta::Conta(int id, string banco, int numConta) {
    this->id = id;
    this->banco = banco;
    this->numConta = numConta;
    this->saldo = 0;
}

void Conta::imprimir() {
    cout << "\nImprimir Conta\n";
    cout << "ID: " << id << endl;
    cout << "Banco: " << banco << endl;
    cout << "Num conta: " << numConta << endl;
    cout << "Saldo: " << saldo << endl;
}

