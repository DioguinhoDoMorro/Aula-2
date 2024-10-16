#include <stdio.h>

int main() {
    char operacao;
    float numero1, numero2, resultado;

    printf("Digite a operação (+, -, *, /): ");
    scanf(" %c", &operacao);

    printf("Digite dois números: ");
    scanf("%f %f", &numero1, &numero2);

    switch (operacao) {
        case '+':
            resultado = numero1 + numero2;
            printf("Resultado: %.2f\n", resultado);
            break;
        case '-':
            resultado = numero1 - numero2;
            printf("Resultado: %.2f\n", resultado);
            break;
        case '*':
            resultado = numero1 * numero2;
            printf("Resultado: %.2f\n", resultado);
            break;
        case '/':
            if (numero2 != 0) {
                resultado = numero1 / numero2;
                printf("Resultado: %.2f\n", resultado);
            } else {
                printf("Erro: divisão por zero\n");
            }
            break;
        default:
            printf("Operação inválida\n");
            break;
    }

    return 0;
}
