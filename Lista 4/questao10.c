#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void algoritmo_rol (int *Ax, int *Bf, int nx, int nf);
void bubbleSort (int *, int);

int main () {
	int *vetor_X, *vetor_F;
	int vTam, intervalo;

	puts("Qual tamanho do vetor X?");
	scanf("%d", &vTam);
	vetor_X = malloc(vTam * sizeof (int));
	if (!vetor_X) {
		puts("Falha na solitação de memória!");
		exit(1);
	}

	puts("Qual o limite N do intervalo? (0 até N-1)");
	scanf("%d", &intervalo);
	
	srand (time (NULL));
	for (int k = 0; k < vTam; k++)
		*(vetor_X + k) = rand () % intervalo;

	vetor_F = calloc(intervalo, sizeof (int));
	if (!vetor_F) {
		puts("Falha na solitação de memória!");
		exit(1);
	}

	bubbleSort (vetor_X, vTam);
	algoritmo_rol (vetor_X, vetor_F, vTam, intervalo);

	puts("Resultados:");
	
	printf("X = {");
	for (int k = 0; k < vTam; k++)
		if (k != vTam - 1) printf("%d, ", *(vetor_X + k));
		else printf("%d", *(vetor_X + k));
	printf("}\n");

	printf("F = {");
	for (int k = 0; k < intervalo; k++)
		if (k != intervalo-1) printf("%d, ", *(vetor_F + k));
		else  printf("%d", *(vetor_F + k));
	printf("}\n");
	
	free(vetor_X);
	free(vetor_F);
	
	return 0;
}

void algoritmo_rol (int *Ax, int *Bf, int nx, int nf) {
	for (int i = 0; i < nf ; i++)
		for (int j = 0; j < nx ; j++)
			if (*(Ax + j) == i) (*(Bf + i))++;
}

void bubbleSort (int *A, int n) {
	int aux;
	for (int i = 0; i < (n - 1) ; i++)
		for (int j = (n - 1); j > i ; j--){
			if (*(A + j) < *(A + (j - 1))){
				aux = *(A + j);
				*(A + j) = *(A + (j - 1));
				*(A + (j - 1)) = aux;
			}
		}
}