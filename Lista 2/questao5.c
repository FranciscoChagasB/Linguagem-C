#include <stdio.h>
#include <stdlib.h>

int main(){
    int x, aux;
    aux = 0;
    printf("Insira um valor");
    scanf("%d", &x);
    while(x >= aux){
        if(x > aux){
            printf("O maior valor é %d", x);
        }
        printf("Insira um valor");
        scanf("%d", &x);
    }
}