#include <stdio.h>

int main(){
	
	int x, y;
	float z, per;
	
	printf("Insira o número de horas trabalhadas(no mês): ");
	scanf("%d", &x);
	printf("Insira o percentual de desconto do INSS: ");
	scanf("%d", &y);
	printf("Insira o valor da hora aula: ");
	scanf("%f", &z);
	
	printf("O salário bruto é de: R$%.2f\n", (float)x*z);
	per = (float)y/100;
	printf("O salário líquido é de: RS%.2f", ((float)x*z)-(((float)x*z)*per));
	
}
