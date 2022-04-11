#include <stdio.h>

int main(){
	
	float vol, x, y, z;
	
	printf("Insira o comprimento da caixa(m): ");
	scanf("%f", &x);
	printf("Insira a altura da caixa(m): ");
	scanf("%f", &y);
	printf("Insira a largura da caixa(m): ");
	scanf("%f", &z);
	
	vol = x*y*z;
	printf("O volume da caixa = %.2f m3", vol);
	
}
