#include <stdio.h>
#include <math.h>

int main(){
	
	float x, y, z, potraiz, prodraiz;
	
	printf("Insira um valor para x: ");
	scanf("%f", &x);
	printf("Insira um valor para y: ");
	scanf("%f", &y);
	printf("Insira um valor para z: ");
	scanf("%f", &z);
	
	printf("A m�dia aritm�tica �: %.2f", (x+y+z)/3);
	potraiz = (float)1 / 3;
	prodraiz = x*y*z;
	printf("A m�dia geom�trica �: %.2f", pow(prodraiz, potraiz) );
	
}
