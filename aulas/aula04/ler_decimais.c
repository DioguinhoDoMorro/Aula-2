#include <stdio.h>

int main() {
  float nota=0.0f;
  printf("entre com a nota:0 e 10");
  int deu_certo = scanf("%f", &nota);
  printf("voce digito a nota %f\n", nota);
  double pi= 0.0;
  printf("entre com o valor de pi com ate 10 casas:");
  deu_certo = scanf("%lf", &pi);
  printf("voce digitou: %lf\n", pi);
  return 0;
}