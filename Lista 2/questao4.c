#include <stdio.h>
#include <stdlib.h>

int main(){

    int p = 110, j = 150, dif;
    dif = j - p;
    puts("A cada ano Pedro cresce 1 cm a mais do que José");
    puts("Para terem a mesma altura o número de anos é o mesmo da diferença de altura");
    printf("O tempo para terem a mesma idade é: %d", dif);
    printf("Logo após %d anos Pedro será mais alto que José", dif + 1);
    
}