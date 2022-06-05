#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10
#define QNT 100

void preenchervetor(int *p, int t, int q);
void vetoremordem(int *p, int r);
void imprimirvetor(int *p, int t);

int main(){

    int x[TAM];

    //gerando dados do vetor
    preenchervetor(x, TAM, QNT);

    //imprimindo vetor antes de ordenar
    imprimirvetor(x, TAM);
    puts(" ");
    
    //ordenando o vetor
    vetoremordem(x, TAM);

    //imprimindo vetor ordenado
    imprimirvetor(x, TAM);

}
void preenchervetor(int *p, int t, int q){
    srand(time(NULL));
    for (int k=0; k<t; k++){
        *(p + k) = rand() % q;
    }
}
void vetoremordem(int *p, int r){
  int aux, j, i;
	for(j=r-1; j>=1; j--){
		for(i=0; i<j; i++){
			if(*(p+j)<*(p+i)){
				aux=*(p+i);
        *(p+i)=*(p+j);
        *(p+j)=aux;
      }
    }
  } 
}
void imprimirvetor(int *p, int t){
    for (int k=0; k<t; k++){
        printf("%d ",*(p + k));
    }
}