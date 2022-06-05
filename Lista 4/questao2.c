#include <stdio.h>
#include <stdlib.h>

int main(){

    int x, y, aux;
    int *ptrx, *ptry, *ptraux;
    ptrx = &x;
    ptry = &y;
    ptraux = &aux;

    //entrada de dados
    printf("Insira um valor: ");
    scanf("%d", ptrx);
    printf("Insira outro valor: ");
    scanf("%d", ptry);
    
    //processamento dos dados
    *ptraux = *ptrx;
    *ptrx = *ptry;
    *ptry = *ptraux;
    
    //saida dos dodos
    printf("O primeiro valor agora é: %d, e o segundo valor agora é: %d", *ptrx, *ptry);

}