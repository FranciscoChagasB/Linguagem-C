#include <stdio.h>
#include <stdbool.h>
bool verPar(int n){
    return (n%2 == 0)? true: false;
}

int main(int argc, char const *argv[])
{
    int n=1,maior = 0, menor = 0;
    while (1)
    {
        puts("Insira um valor");
        scanf("%d",&n);
        if (verPar(n) && n<0) break;
        if (n > maior) maior = n;
        else if (n < menor && n >= 0) menor = n; 
    }
    printf("maior: %d, menor: %d",maior,menor);
    
    return 0;
}
