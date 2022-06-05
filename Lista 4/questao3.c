#include <stdio.h>
#include <stdlib.h>

int main(){

    int x, menor, maior, aux, i = 0;
    int *ptrx, *ptrmenor = 0, *ptrmaior = 0, *ptraux = 0;
    ptrx = &x;
    ptrmenor = &menor;
    ptrmaior = &maior;
    ptraux = &aux;

    do{
    	puts("Insira um valor: ");
    	scanf("%d", ptraux);
    	if(i == 0){
    		*ptrmenor = *ptraux;
    		*ptrmaior = *ptraux;
    		i++;
		}else if(*ptraux == 0){
			printf("Você inseriu o valor 0, programa encerrado!!!");
			break;
		}else if(*ptraux > *ptrmaior){
			*ptrmaior = *ptraux;
		}else if(*ptraux < *ptrmenor){
			*ptrmenor = *ptraux;
		}
		printf("O menor valor inserido foi: %d\n", *ptrmenor);
	}while(1);
}