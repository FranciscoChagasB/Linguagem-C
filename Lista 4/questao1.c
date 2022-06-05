#include <stdio.h>
#include <stdlib.h>

int main(){

  int x, y, som;
  int *ptrx, *ptry, *ptrsom;
  ptrx = &x;
  ptry = &y;
  ptrsom = &som;

  //entrada de dados
  printf("Insira um valor: ");
  scanf("%d", ptrx);
  printf("Insira outro valor: ");
  scanf("%d", ptry);

  //processamento dos dados
  *ptrsom = *ptrx + *ptry;

  //saida dos dados
  printf("A soma a partir do ponteiro é: %d, e o endereço é: %p\n", *ptrsom, ptrsom);
    
}