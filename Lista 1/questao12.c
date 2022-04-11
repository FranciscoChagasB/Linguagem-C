#include <stdio.h>

int main(){
	
	float x, y;
	
	printf("Insira o primeiro valor: ");
	scanf("%f", &x);
	printf("Insira o segundo valor: ");
	scanf("%f", &y);
	
	printf("A soma = %.2f, o produto = %.2f e a diferença = %.2f\n", x+y, x*y, x-y);
	printf("O quociente = %.2f e o resto da divisão = %.2f\n", x/y, (int)x%(int)y);
	
}
