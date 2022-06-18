#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10
#define QNT 100

void preenchervetor(int *p, int t, int q);
void vetoremordem(int *p, int r);
void imprimirvetor(int *p, int t);

int main(int argc, char *argv[2]){

    int v[TAM];
    int aux1 , aux2;
    aux1 = strtol(argv[1], NULL, 10);
    aux2 = strtol(argv[2], NULL, 10);

    //gerar dados do vetor
    preenchervetor(v, aux1, aux2);
    //ordenar o vetor
    vetoremordem(v, aux1);
    //saida de dados
    imprimirvetor(v, aux1);
    printf("Posição do menor elemento [%p] : Menor elemento %d\n", v[0], v[0]);

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
        printf("[%p] : %d\n",p+k,*(p + k));
    }
}