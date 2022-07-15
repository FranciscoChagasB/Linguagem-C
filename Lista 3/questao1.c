#include <stdio.h>
#include <stdlib.h>

int main(){
    float vetorTipoFloat[15];

    for(int i = 0; i <= 15; i++){
        vetorTipoFloat[i] = (float)(rand() % 100) / 10; 
    }

    for(int i = 0; i <= 15; i++){
        vetorTipoFloat[1] = vetorTipoFloat[1] < vetorTipoFloat[i]? vetorTipoFloat[i]: vetorTipoFloat[1];
    }

    for(int i = 0; i <= 15; i++){
        printf("%.2f \n", vetorTipoFloat[i]);
    }

    printf("O maior numero do vetor é: %.2f", vetorTipoFloat[1]);
    
}