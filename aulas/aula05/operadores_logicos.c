#include <stdio.h>
int main() {
  int p= 0;
  int q= 0;
int e_logico= p && q;
int ou_logico= p || q;

  int e_logico+p && q;
  printf("p=%d, q=%d, p && q = %d\n", p, q, e_logico")
  q=1;
  e_logico= p && q;
  printf("%i e %i = %i\n", p, q, e_logico")
  p=1;
  q=0;
  e_logico= p && q;
  printf("%i e %i = %i\n", p, q, e_logico")
  q=1;
  e_logico= p && q;
  printf("%i e %i = %i\n", p, q, e_logico")
    p=0;
  q=0;
  int ou_logico= p || q;
  printf("%i ou %i = %i\n", p, q, ou_logico")
  
  return 0;
  }