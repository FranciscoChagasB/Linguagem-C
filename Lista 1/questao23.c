#include <stdio.h>

int main(){
	
	int x, y, z, xinvert;
	
	printf("Insira um valor: ");
	scanf("%d", &x);
	
	while(x>0){
		
		z = x % 10;
		xinvert = xinvert * 10 + z;
		x /= 10;
		
	} 
	
	printf("O valor invertido é: %d ", xinvert);
	
}
