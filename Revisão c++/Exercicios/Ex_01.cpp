#include <iostream>

using namespace std;

int main() {
    int numP=50; 
    double vSal[numP];

    for (int i=0 ; i<numP ; i++) {
        cout << "Informe o salario bruto: " << endl;
        cin >> vSal[i];
        double sal = ((vSal[i] * 116) / 100);
        vSal[i] = sal - sal * 0.3;   
    }

    for (int i=0 ; i<numP ; i++) {
        cout << "Salario do funcionario " << i+1 << ": R$" << vSal[i] << endl;
    }

    return 0;
}