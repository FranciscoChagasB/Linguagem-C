#include <stdio.h>
#include <stdlib.h>

#define QTD 3

typedef struct  node
{
    int x;
    int y;
    float z;
} Node;

int main(){
    int *node1;
    node1 = malloc(2*sizeof(int));

    *(node1+1) = 10;

    printf("%d \n", node1[1]);
    
    node1= malloc(3*sizeof(2));

    printf("%d", node1[1]);

}
