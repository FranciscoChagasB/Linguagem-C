#include <stdio.h>

int main(){
	
	int x, y;
	float z, per;
	
	printf("Insira o n�mero de horas trabalhadas(no m�s): ");
	scanf("%d", &x);
	printf("Insira o percentual de desconto do INSS: ");
	scanf("%d", &y);
	printf("Insira o valor da hora aula: ");
	scanf("%f", &z);
	
	printf("O sal�rio bruto � de: R$%.2f\n", (float)x*z);
	per = (float)y/100;
	printf("O sal�rio l�quido � de: RS%.2f", ((float)x*z)-(((float)x*z)*per));
	
}
