#include <stdio.h>
int main() {
int nota;


printf("Digite uma nota entre 1 e 10: ");
scanf("%i", &nota);

while(nota < 1 || nota > 10) {
  printf("Nota invalida. Tente novamente!\n");
  scanf("%i", &nota);
}
  printf("Nota valida recebida: %d\n", nota);
return 0;
}