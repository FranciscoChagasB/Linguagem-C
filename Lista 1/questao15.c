#include <stdio.h>

int main(){
	
	int x;
	
	printf("Insira o n�mero de dias trabalhados: ");
	scanf("%d", &x);
	
	if(x <=10)
		printf("O sal�rio l�quido � de: R$%.2f", (float)(x*50.25)-((x*50.25)*0.1));
	
	if(x>10 && x<=20)
		printf("O sal�rio l�quido � de: R$%.2f", (float)(x*50.25)+((x*50.25)*0.2)-((x*50.25)*0.1));
	
	if(x>20)
		printf("O sal�rio l�quido � de: R$%.2f", (float)(x*50.25)+((x*50.25)*0.3)-(((float)(x*50.25)+((x*50.25)*0.3))*0.1));
	
}
