#include <stdio.h>
#include <stdlib.h>

int main()
{
    int fatorial, x;
    printf("Insira um número: ");
    scanf("%d", &x) ;
    for(fatorial = 1; x > 1; x = x - 1)
    {
        fatorial = fatorial * x;
    }

    printf("\n%d", fatorial);
}