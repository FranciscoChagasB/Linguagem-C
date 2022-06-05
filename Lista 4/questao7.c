#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 40

int main(){

    char stringx[TAM] = "ciência da", stringy[TAM] = " computação";
    char *ptrpri, *ptrseg;
    ptrpri = stringx;
    ptrseg = stringy;
    //antes de concatenar
    printf("A string é %s\n", ptrpri);

    //concatenando a string
    strcat(ptrpri, ptrseg);
    puts("Concatenando");

    //depois de concatenar
    printf("A string agora é %s\n", ptrpri);

}