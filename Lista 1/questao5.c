#include <stdio.h>

int main(){
	
	float x;
	
	printf("Insira o valor da conta: ");
	scanf("%f", &x);
	
	printf("O valor total da conta é de: %.2f", x+(x*0.1));
	
}
