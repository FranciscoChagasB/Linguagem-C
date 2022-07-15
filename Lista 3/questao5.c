#include <stdio.h>
#include <string.h>

int main (){
    char string1[200], string2[100];
    int i;
    printf("Digite a string1: ");
    scanf("%s", string1);
    printf("Digite a string2: ");
    scanf("%s", string2);
    strcat(string1, string2);
    printf("String concatenada: %s\n", string1);
    return 0;
}