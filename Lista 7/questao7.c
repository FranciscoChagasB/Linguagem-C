#include <stdio.h>
#include <stdlib.h>

union Valores {
  float a;
  float b;
};

int main(void) {
  union Valores N1;

  N1.a = 150;
  N1.b = 25;

  printf("Valor do membro a: %.2f\n", N1.a);
  printf("Valor do membro b: %.2f\n", N1.b);
  
  return 0;
}