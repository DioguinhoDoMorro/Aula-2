#include <stdio.h>
int main(){
  char tecla='\0' ; // caractere nulo
  
  printf("Digite uma tecla: ");
  int deu_certo = scanf("%c", &tecla);
  getchar();
  printf("voce digitou: %c\n", tecla);
  
  printf("digite outra tecla: ");
  getchar(); //limpao \n
  deu_certo = scanf("%c", &tecla);
  printf("voce digitou: %c\n", tecla);

  char nome[100];
  printf("entre com um nome:");
  deu_certo = scanf("%[^\n]", nome);
  printf("voce digitou: %s\n", nome);
  
  return 0; 
  }