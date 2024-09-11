#include <stdio.h>

int main() {

 int numero1; 
 int numero2;
 float numero3;

printf("Digite o primeiro numero inteiro: ");
int deu_certo = scanf("%d", &numero1);

printf("Digite o segundo numero inteiro: ");
deu_certo = scanf("%d", &numero2);

int soma = numero1 + numero2;
int subtracao = numero1 - numero2;
int multiplicacao = numero1 * numero2;
int divisao = numero1 / numero2;
int resto = numero1 % numero2;
int fracao = numero1 / numero3;

printf("%i + %i = %i\n", numero1, numero2, soma);
printf("%i - %i = %i\n", numero1, numero2, subtracao);
printf("%i * %i = %i\n", numero1, numero2, multiplicacao);
printf("%i / %i = %i\n", numero1, numero2, divisao);
printf("%i %% %i = %i\n", numero1, numero3, fracao);
printf("%i %% %i = %i\n", numero1, numero2, resto);

return 0;
}  