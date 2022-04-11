#include <stdio.h>

int main(){
	
	int x;
	
	printf("Insira um valor: ");
	scanf("%d", &x);
	
	printf("O tripo = %d, Quadrado = %d, Meio = %.2f\n", x*3, x*x, (float)x/2);
	
}
