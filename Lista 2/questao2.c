#include <stdio.h>
#include <stdlib.h>

int main(){

    int x;
    printf("Insira um número de 1 a 7: ");
    scanf("%d", &x);
    printf("%d", x);
    while(x > 0){
        if(x = 1){
            puts("O dia é Domingo");
        }
        if(x = 2){
            puts("O dia é Segunda");
        }
        if(x = 3){
            puts("O dia é Terça");
        }
        if(x = 4){
            puts("O dia é Quarta");
        }
        if(x = 5){
            puts("O dia é Quinta");
        }
        if(x = 6){
            puts("O dia é Sexta");
        }
        if(x = 7){
            puts("O dia é Sábado");
        }
        if(x > 7){
            puts("Número fora do intervalo");
        }
    }

}