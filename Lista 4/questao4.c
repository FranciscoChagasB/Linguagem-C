#include <stdio.h>
#include <stdlib.h>

#define TAM 10

int main(){

	int x[TAM];
    int *pv;
    pv = x;
	
	//entrando com os dados do vetor
    for(int k = 0; k < TAM; k++){
        printf("Insira um valor: ");
		scanf("%d", &*(pv + k));
    }
    //imprimindo o vetor
    for(int j = 0; j < TAM; j++){
        printf("Endereço: %p, Valor: %d\n",pv+j,*pv+j);
    }
    
}