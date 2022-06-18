#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv){
    int som, mult;

    if(*argv[2] > ')' && *argv[2] < '+'){
        printf("O resultado é:");
    }
    if(*argv[2] == '+'){
        som = atoi(argv[1]) + atoi(argv[3]);
        printf("O resultado é: %d", som);
    }
}