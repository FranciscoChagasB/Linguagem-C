#include <stdio.h>

int main(){
	
	float x;
	
	printf("Insira o raio do círculo: ");
	scanf("%f", &x);
	
	printf("O diâmetro do círculo é: %.2f\n", x*2);
	printf("A circunferência do círculo é: %.2f\n", x*2*3.14159);
	printf("A área do círculo é: %.2f\n", (x*x)*3.14159);
	
}
