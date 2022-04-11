#include <stdio.h>

int main(){
	
	int x;
	
	printf("Insira a temperatura(em graus Celsius): ");
	scanf("%d", &x);
	
	printf("A temperatura em graus Fahrenheit é: %.1f", (float)(9*x+160)/5);
	
}
