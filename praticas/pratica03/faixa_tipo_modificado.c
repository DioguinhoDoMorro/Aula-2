#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
    // Passo e: Imprimir o valor mínimo e máximo do tipo unsigned char
    printf("O tipo 'unsigned char' aceita valores entre %i e %i.\n", 0, UCHAR_MAX);

    // Passo h: Imprimir o valor mínimo e máximo dos tipos short int e unsigned short int
    printf("O tipo 'short int' aceita valores entre %i e %i.\n", SHRT_MIN, SHRT_MAX);
    printf("O tipo 'unsigned short int' aceita valores entre %i e %i.\n", 0, USHRT_MAX);

    // Passo k: Imprimir o valor mínimo e máximo dos tipos long int e unsigned long int
    printf("O tipo 'long int' aceita valores entre %li e %li.\n", LONG_MIN, LONG_MAX);
    printf("O tipo 'unsigned long int' aceita valores entre %i e %lu.\n", 0, ULONG_MAX);

    // Passo n: Imprimir o valor mínimo e máximo do tipo long double
    printf("O tipo 'long double' aceita valores entre %Le e %Le.\n", LDBL_MIN, LDBL_MAX);

    return 0;
}
