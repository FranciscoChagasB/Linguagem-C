#include <stdio.h>

int main(){
  int x ;
  printf("Insira um número: ");
  scanf("%d", &x);

  printf("O número %d em hexadecimal é igual a: %x ", x, x);
  printf("O número %d em octal é igual a: %o", x, x);
}