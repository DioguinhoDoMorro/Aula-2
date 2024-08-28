#include <stdio.h>

int main() {
    // Passo d: Declarar a variável populacao_mundial
    long int populacao_mundial = 7800000000L;
    // Passo e: Exibir o valor de populacao_mundial
    printf("Populacao Mundial: %li\n", populacao_mundial);

    // Passo h: Declarar a constante HORA_EM_SEGUNDOS
    const short int HORA_EM_SEGUNDOS = 3600;
    // Passo i: Exibir o valor de HORA_EM_SEGUNDOS
    printf("1 hora corresponde a %i segundos.\n", HORA_EM_SEGUNDOS);

    // Passo l: Declarar a variável precisao_extrema
    long double precisao_extrema = 3.14159265358979323846L;
    // Passo m: Exibir o valor de precisao_extrema
    printf("Precisao Extrema: %.20Lf\n", precisao_extrema);

    return 0;
}
