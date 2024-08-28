#include <stdio.h>

int main() {
    // Declaração das variáveis
    char matricula[9] = "00000000"; // 8 dígitos + 1 para o caractere nulo
    int idade = 99;
    float altura = 9.90;
    float peso = 999.0;
    char sexo = 'M';

    // Impressão dos valores das variáveis
    printf("Matricula: %s\n", matricula);
    printf("Idade: %d anos\n", idade);
    printf("Altura: %.2f m\n", altura);
    printf("Peso: %.1f kg\n", peso);
    printf("Sexo: %c\n", sexo);

    return 0;
}
