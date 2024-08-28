#include <stdio.h>

int main() {
    // Passo d: Declarar a variável caractere
    char caractere = 255;
    // Passo e: Declarar a variável inteiro
    int inteiro = caractere;
    // Passo f: Declarar a variável flutuante
    float flutuante = inteiro;
    // Passo g: Declarar a variável duplo
    double duplo = flutuante;

    // Passo h: Imprimir os valores das variáveis
    printf("caractere = %i\n", caractere);
    printf("inteiro = %i\n", inteiro);
    printf("flutuante = %.7f\n", flutuante);
    printf("duplo = %.7f\n", duplo);

    // Passo k: Atribuir novo valor à variável duplo
    duplo = 256.1234567;
    // Passo l: Atribuir o valor de duplo para flutuante
    flutuante = (float) duplo;
    // Passo m: Atribuir o valor de flutuante para inteiro
    inteiro = (int) flutuante;
    // Passo n: Atribuir o valor de inteiro para caractere
    caractere = (char) inteiro;

    // Passo o: Imprimir os valores das variáveis após as conversões
    printf("caractere = %i\n", caractere);
    printf("inteiro = %i\n", inteiro);
    printf("flutuante = %.7f\n", flutuante);
    printf("duplo = %.7f\n", duplo);

    return 0;
}
