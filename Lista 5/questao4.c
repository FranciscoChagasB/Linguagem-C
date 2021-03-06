#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (int argc, char *argv[]){
	int *vtA = NULL, tam, aux;
	float *vtNorm = NULL;

	tam = atoi(argv[1]);

	vtA = malloc(tam * sizeof(int));
	vtNorm = malloc(tam * sizeof(float));
	if (!vtA || !vtNorm){
		puts("Não foi possível alocar a memoria desejada");
		exit(1);
	}
	
	srand(time(NULL));
	for (int k = 0; k < tam; k++) *(vtA + k) = rand() % 100;
	for(int i = 0; i < tam -1; i++)
		for(int j = tam - 1; j > i; j--)
			if (*(vtA + j) < *(vtA +j - 1)){
				aux = *(vtA + j);
				*(vtA + j) = *(vtA + j - 1);
				*(vtA + j - 1) = aux;
			}

	puts("Vetor Original:");
	for (int k = 0; k < tam; k++) printf("%d\t", *(vtA + k));
	puts("");

	puts("Vetor Normalizado:");
	for (int k = 0; k < tam; k++){
		*(vtNorm + k) = (float)(*(vtA + k) - *(vtA))/(*(vtA + tam - 1) - *(vtA));
		printf("%.2f\t", *(vtNorm + k));
	}
	puts("");

	free(vtA);
	free(vtNorm);
	
	return (0);
}