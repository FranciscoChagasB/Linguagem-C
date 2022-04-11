#include <stdio.h>

int main(){
	
	int x, y, hr, min, seg;
	
	printf("Insira a quant. de segundos: ");
	scanf("%d", &x);
	
	if(x>=3600){
		
		hr = x / 3600;
		y = x % 3600;
		min = y / 60;
		seg = y % 60;
		printf("São %d horas, %d minutos e %d segundos", hr, min, seg);
		
	}
	
	if(x<3600){
		
		min = x / 60;
		seg = x % 60;
		printf("São %d minutos e %d segundos", min, seg);
		
	}
	
}
