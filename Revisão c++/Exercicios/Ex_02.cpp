#include <iostream>

using namespace std;

int main() {
    int M=2, idade[M];
    float media=0;

    for (int i=0 ; i<M ; i++) {
        cout << "Informe a idade da pessoa " << i+1 << ": " << endl;
        cin >> idade[i];
        cout << endl;
        media = media + idade[i];
    }
    media = media / M;
    cout << "Media das idades: " << media << endl;

    return 0;
}