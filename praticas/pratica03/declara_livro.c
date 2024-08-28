#include <stdio.h>

int main() {
    char isbn[14] = "12222222";
    int num_paginas = 2222;
    float preco = 322;
    int ano_publicacao = 2078;

    printf("ISBN: %s\n", isbn);
    printf("Num. Paginas: %d\n", num_paginas);
    printf("Preco: R$ %.2f\n", preco);
    printf("Publicado em %d\n", ano_publicacao);

    return 0;
}
