#include <stdio.h>

int main() {
    char tecla;
    char nome[31];

    printf("Digite uma tecla: ");
    scanf(" %c", &tecla);  
    printf("Você digitou: %c\n", tecla);

    printf("Digite seu nome: ");
    scanf("%s", nome);
    printf("Você digitou: %s\n", nome);

    return 0;
}
