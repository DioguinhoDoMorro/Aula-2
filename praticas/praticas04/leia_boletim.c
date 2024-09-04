#include <stdio.h>

int main() {
    int matricula;
    float a1, a2, media;


    printf("Digite a matricula: ");
    scanf("%d", &matricula);
    printf("Digite a nota da A1: ");
    scanf("%f", &a1);
    printf("Digite a nota da A2: ");
    scanf("%f", &a2);

    media = (a1 + a2) / 2;


    printf("Matricula\tA1\tA2\tMedia\n");
    printf("%d\t\t%.2f\t%.2f\t%.2f\n", matricula);
    return 0;
    }
    