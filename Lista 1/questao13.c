#include <stdio.h>

int main(){
	
	int a, b, c;
	
	printf("Insira o valor para A: ");
	scanf("%d", &a);
	printf("Insira o valor para B: ");
	scanf("%d", &b);
	
	c = a;
	a = b;
	b = c;
	printf("O valor de A = %d e o valor de B = %d", a, b);
	
}