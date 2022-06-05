#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 40

int main(){

    char stringx[TAM] = "primeira", stringy[TAM] = "segunda";
    char *ptrpri, *ptrseg;
    ptrpri = stringx;
    ptrseg = stringy;
    //antes de copiar
    puts("Antes");
    printf("Primeira string [%s], segunda string [%s]\n", ptrpri, ptrseg);

    //processando os dados
    strcpy(ptrseg, ptrpri);

    //depois de copiar
    puts("Depois");
    printf("Primeira string [%s], segunda string [%s]\n", ptrpri, ptrseg);

}