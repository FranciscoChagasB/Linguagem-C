#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 7

int main(){

    char stringx[TAM] = "lista4";
    char *ptrstr;
    int *ptrtam;
    ptrstr = stringx;
    *ptrtam = strlen(ptrstr);

    //saida de dados
    printf("A string [%s] possui tamanho %d", ptrstr, *ptrtam);

}