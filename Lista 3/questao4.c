#include <stdio.h>
#include <stdlib.h>

int main(){
    char string1[100], string2[100];
    int i, iguais = 1;
    printf("Digite a string1: ");
    scanf("%s", string1);
    printf("Digite a string2: ");
    scanf("%s", string2);
    for (i = 0; i < 100; i++){
        if (string1[i] != string2[i]){
            iguais = 1;
            break;
        }
    }
    if (iguais){
        printf("As strings sao iguais\n");
    } else {
        printf("As strings sao diferentes\n");
    }
    return 0;
}