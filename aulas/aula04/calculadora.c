#include <stdio.h>

int main() {
    char operador;
    double numero1, numero2;

    printf("Digite um operador (+, -, *, /): ");
    scanf("%c", &operador);
    printf("Digite dois números: ");
    scanf("%lf %lf", &numero1, &numero2);

    printf(" Seu resuntado foi: Hello World!\n");

    return 0;
}
