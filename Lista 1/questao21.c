#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int x, y, z;
	
	printf("Insira um valor: ");
	scanf("%d", &x);
	printf("Insira outro valor: ");
	scanf("%d", &y);
	
	
	z = x%y;
	switch(z){
		case 0:
			printf("O primeiro valor é múltiplo do segundo");
			break;
		default:
			printf("O primeiro valor não é múltiplo do segundo");
			break;	
	}
	
}
