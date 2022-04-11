#include <stdio.h>
#include <math.h>

int main(){
	
	float d, x1, x2, y1, y2, quadx, quady;
	
	printf("Insira o valor da coordenada x1: ");
	scanf("%f", &x1);
	printf("Insira o valor da coordenada x2: ");
	scanf("%f", &x2);
	printf("Insira o valor da coordenada y1: ");
	scanf("%f", &y1);
	printf("Insira o valor da coordenada y2: ");
	scanf("%f", &y2);
	
	quadx = (pow(x2, 2))-(pow(x1, 2));
	quady = (pow(y2, 2))-(pow(y1, 2));
	d = sqrt(quadx) + sqrt(quady);
	printf("A distância entre os dois pontos no plano é %.2f", d);
	
}
