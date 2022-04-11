#include <stdio.h>

int main(){
	
	float x, y;
	
	printf("Insira o valor do dólar hoje: ");
	scanf("%f", &x);
	printf("Insira o valor(em real) que deseja converter: ");
	scanf("%f", &y);
	
	printf("O valor em dólar = $%.2f", y / x);
	
}
