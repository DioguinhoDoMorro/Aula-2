#include <stdio.h>

int main() {
    int numero = 0;
    int deu_certo;

    printf("Entre com um numero de 1 a 10: ");
    deu_certo = scanf("%i", &numero);

    if (deu_certo == 1 && numero > 0 && numero <= 10) {
        printf("Tabuada do %i\n", numero);
        for (int i = 1; i <= 10; i++) {
            printf("%i x %i = %i\n", numero, i, numero * i);
        }
    } else {
        printf("Numero invalido! Tente novamente\n");
    }

    return 0;
}
