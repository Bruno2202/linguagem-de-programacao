class Pais {
    private:
        string iso;     // Exemplo: BRA (Brasil), AR (Aregentina) etc
        string nome;
        int populacao;
        float dimensao; // Em km²
        string vizinhos;

    public:
        Pais(string, string, int, float);
        Pais(string);

        bool mesmoPais(Pais& P2) {
            cout << "0 = falso // 1 = verdadeiro" << endl;
            return iso == P2.iso;
        }
    
        string getVizinhos() { return vizinhos; };

        void setVizinhos(string);
};

Pais::Pais(string iso, string nome, int populacao, float) {
    this->iso = iso;
    this->nome = nome;
    this->populacao = populacao;
    this->dimensao = dimensao;
}

Pais::Pais(string vizinhos) {
    this->vizinhos = vizinhos;
}

void Pais::setVizinhos(string vizinhos) {
    this->vizinhos = vizinhos;
}

