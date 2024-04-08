#include <stdio.h>

int main() {
    double soma = 0.0;
    int numerador = 3;
    int denominador = 99;

    for (int i = 1; i <= 399; i++) {
        if (i % 2 == 0) {
            soma -= (double) numerador / denominador;
        } else {
            soma += (double) numerador / denominador;
        }
        numerador += 3;
        denominador--;
    }

    printf("A soma da série é: %.10lf\n", soma);

    return 0;
}
