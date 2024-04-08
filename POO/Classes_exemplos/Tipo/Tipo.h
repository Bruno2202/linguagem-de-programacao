class Tipo {

    protected: // <- publico para quem herda, mas é privado para o uso externo
            int id;
            string descricao;

    public:
        //construtores
        Tipo(): id(0), descricao("") {}
        Tipo(int id, string descricao) : id(id), descricao(descricao) {}

        //gets
        int getId() {return this->id;}
        string getDescricao() {return this->descricao;}

        //sets
        void setId(int id) {this->id = id;} 
        void setDescricao(string descricao) {this->descricao = descricao;}

        void imprimir() {cout << endl << "Tipo: " << this->id << "-" << this->descricao << endl;}
};