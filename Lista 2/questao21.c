#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char v[5];

    puts("Insira um numero de 5 digitos");
    gets(v);
    strrev(v);
    puts("O numero invertido e:");
    puts(v);
       
    return 0;
}
