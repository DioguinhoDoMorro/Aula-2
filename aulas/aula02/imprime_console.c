#include <stdio.h> //biblioteca entrada e saida

int main() {
  // imprime na tela
  printf("PAO!\n");

  //imrpime um numero inteiro
  printf("%i\n",10);
  printf("%i %i\n",-10,-100);
  printf("%5i\n",110);
  printf("%05i\n",1);

  //imprime um numero decimal
  printf("%f\n",10.5);
  printf("%10.2f\n",-10.5888);
  printf("%10.2f\n",105888.8888);

  //imprime um caaracter aspas simples
  printf("%c\n",'A');
  printf("%c\n", 68 );

  //imprime um string
  printf("%s\n","louco");
  printf("%s\n","quero cafe");

  return 0;
}