#include<stdio.h>
int main(){
int numero=0;

printf("entre com um numero de 1 a 10: ");
scanf("%i",&numero);
while(numero<1 || numero>10){
while (getchar() != '\n');
printf("numero invalido. Tente novamente.\n");
printf("entre com um numero de 1 a 10:");
scanf("%i",&numero);

}
  int i=0;
  while(i<numero){
  printf("%i",i);
  i++;
  }
return 0;
  }
