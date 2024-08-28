#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
  printf("tamanho do char na memoria = %lu byte(s)\n", sizeof(char));
  printf("tamanho do int na memoria = %lu byte(s)\n", sizeof(int));
  printf("tamanho do float na memoria = %lu byte(s)\n", sizeof(float));
  printf("tamanho do double na memoria = %lu byte(s)\n", sizeof(double));

  printf("a faixa de valores do char: de %i a %i\n", CHAR_MIN, CHAR_MAX);
  printf("a faixa de valores do int: de %i a %i\n", INT_MIN, INT_MAX);
  printf("a faixa de valores do float: de %f a %f\n", FLT_MIN, FLT_MAX);
  printf("a faixa de valores do double: de %E a %E\n", DBL_MIN, DBL_MAX);
  printf("\n");
  char tecla = 'a';
  printf("valor da tecla = %c\n", tecla);
  int idade = 10;
  printf("valor da idade = %i\n", idade);
  float nota = 1.75;
  printf("valor da nota = %f\n", nota);
  double pi = 3.14159265358979323846; // 12 casas decimais 
  printf("valor de pi = %.10f\n", pi);
  idade = 20;
  printf("valor da idade = %i\n", idade);
  printf("\n");
  const float PI = 3.1415f;
  printf("valor de constante pi = %f\n", PI);
  //PI = 3.1415f; // erro de compilacao
  printf("\n");
  printf("tamanho do short int na memoria = %lu byte(s)\n", sizeof(short int));
  printf("tamanho do long int na memoria = %lu byte(s)\n", sizeof(long int));
  printf("tamanho do long doble na memoria = %lu byte(s)\n", sizeof(long));
  printf("\n");
  printf("a faixa de valores do short int: de %i a %i\n", SHRT_MIN, SHRT_MAX);
  printf("a faixa de valores do long int: de %i a %i\n", LONG_MIN, LONG_MAX);
  printf("a faixa de valores do long double: de %E a %E\n");
  return 0;
}
