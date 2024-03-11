#include <iostream>

using namespace std;

//Classe Carro
class Carro {

    //Atributos
    private:
        // int id;
        string modelo;
        // int ano;
        // string cor;
        // float valor;

    //Métodos
    public:
        void ler() {
            // cout << "Ler dados de carro" << endl;
            // cout << "ID: " << endl; 
            // cin >> id ;
            cout << "Modelo: "  << endl;
            cin >> modelo;
            // cout << "Ano: " << endl;
            // cin >> ano;
            // cout << "Cor: " << endl;
            // cin >> cor;
            // cout << "Valor: R$ " << endl;
            // cin >> valor;
            // cout << endl << endl;
        }

        void imprimir() {
            cout << endl;
            cout << "Imprimir dados de carro" << endl;
            // cout << "ID: " << id << endl; 
            cout << "Modelo: " << modelo << endl;
            // cout << "Ano: " << ano << endl;
            // cout << "Cor: " << cor << endl;
            // cout << "Valor: R$ " << valor << endl;
        }
};

int main() {
    //Instanciação de objeto: Vinculação dos métodos aos métodos

    Carro car1; // Instanciação do objeto car1(objeto) do tipo Carro;
    car1.ler(); // Execução do método ler para car1;
    car1.imprimir(); // Execução do método imprimir para car1;

    Carro car2; // Instanciação do objeto car1(objeto) do tipo Carro;
    car2.ler(); // Execução do método ler para car1;
    car2.imprimir(); // Execução do método imprimir para car1;

    Carro car3; // Instanciação do objeto car1(objeto) do tipo Carro;
    car3.ler(); // Execução do método ler para car1;
    car3.imprimir(); // Execução do método imprimir para car1;
    
}