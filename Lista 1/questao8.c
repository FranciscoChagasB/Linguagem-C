#include <stdio.h>
#include <math.h>

int main(){
	
	int x;
	
	printf("Insira um valor: ");
	scanf("%d", &x);
	
	x = pow(x, 2);
	printf("O quadrado do valor = %d", x);
	
}