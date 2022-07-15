#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    int n, contador;
    puts("Insira um numero");
    scanf("%d",&n);
    char numero[sizeof(n)];
    sprintf(numero, "%d", n);  
    for (int i = 0; i < strlen(numero); i++)
    {
        contador += (numero[i] == '7') ? 1 : 0;
    }
    puts("A quantidade de numeros 7 dentro do n:"); 
    puts(numero);
    printf("e: %d",contador);
    
    return 0;
}
