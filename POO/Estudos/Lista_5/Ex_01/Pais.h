class Pais {
    private:
        int id;
        string pais;

    public:
        Pais(): id(0), pais("") {};
        Pais(int, string);

        int getId() {return this->id;}
        string getPais() {return this->pais;}

        void setId(int id) {this->id = id;}
        void setPais(string pais) {this->pais = pais;}
};

Pais::Pais(int id, string pais) {
    setId(id);
    setPais(pais);
}