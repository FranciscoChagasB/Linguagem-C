#include <stdio.h>

int main(){
	
	int x, y, z;
	
	printf("Insira a quant. de horas: ");
	scanf("%d", &x);
	printf("Insira a quant. de minutos: ");
	scanf("%d", &y);
	printf("Insira a quant. de segundos: ");
	scanf("%d", &z);
	
	printf("O valor total de segundos = %d", (x*60)+(y*60)+(z));
	
}