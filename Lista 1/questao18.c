#include <stdio.h>

int main(){
	
	float x;
	
	printf("Insira o raio do c�rculo: ");
	scanf("%f", &x);
	
	printf("O di�metro do c�rculo �: %.2f\n", x*2);
	printf("A circunfer�ncia do c�rculo �: %.2f\n", x*2*3.14159);
	printf("A �rea do c�rculo �: %.2f\n", (x*x)*3.14159);
	
}
