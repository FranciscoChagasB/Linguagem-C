#include <stdio.h>

int main(){
	
	float x, y;
	
	printf("Insira o valor do dolar hoje: ");
	scanf("%f", &x);
	printf("Insira o valor(em real) que deseja converter: ");
	scanf("%f", &y);
	
	printf("O valor em dolar = $%.2f", y / x);
	
}