#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int x;
	
	printf("Insira um valor: ");
	scanf("%d", &x);
	
	switch(x%2){
		case 0 :
			printf("O n�mero � par");
			break;
		default:
			printf("O n�mero � impar");
			break;	
	}
	
}
