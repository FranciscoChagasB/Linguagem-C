#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 40

int main(){

    char stringx[TAM] = "palavra", car[] = "a";
    char *strx, *strcar, *aux;
    strx = stringx;
	strcar = car;

    //processando os dados
    aux = strchr(strx, *strcar);
    
    //saida dos dados
    printf("O caractere [%c] foi encontrado\n", *(aux+0));
    printf("O caractere [%c] foi encontrado\n", *(aux+2));
    printf("O caractere [%c] foi encontrado\n", *(aux+5));

}