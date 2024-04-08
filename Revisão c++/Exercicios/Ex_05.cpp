#include <iostream>

using namespace std;

int main() {
    cout << "Números entre 1000 e 2000 que produzem resto 5 quando divididos por 11:" << endl;

    for (int i = 1000; i <= 2000; ++i) {
        if (i % 11 == 5) {
            cout << i << endl;
        }
    }

    return 0;
}
