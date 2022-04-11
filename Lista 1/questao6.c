#include <stdio.h>
#include <math.h>

int main(){

	float x, z;
	int y;
	
	printf("Digite 0 para sexo masculino e 1 para sexo feminino: ");
	scanf("%d", &y);
	
	printf("Insira a altura(m): ");
	scanf("%f", &x);
	
	if(y = 0){
		z = 72.7*x - 58;
		printf("O peso ideal dessa pessoa = %.2f", z);
	}
	if(y = 1){
		z =  62.1*x - 44.7;
		printf("O peso ideal dessa pessoa = %.2f", z);
	}
	
}
