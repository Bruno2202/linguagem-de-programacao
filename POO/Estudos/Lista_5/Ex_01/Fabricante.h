class Fabricante {
    private: 
        int id;
        string nomeFabricante;
    
    public:
        Fabricante(): id(0), nomeFabricante("") {};
        Fabricante(int, string);

        int getId() {return this->id;}
        string getNomeFabricante() {return this->nomeFabricante;}

        void setId(int id) {this->id = id;}
        void setNomeFabricante(string nomeFabricante) {this->nomeFabricante = nomeFabricante;}
};

Fabricante::Fabricante(int id, string nomeFrabricante) {
    setId(id);
    setNomeFabricante(nomeFabricante);
}