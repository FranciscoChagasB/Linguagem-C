#include <stdio.h>
#include <stdlib.h>

typedef struct 
{
    int x;
    int y;
} Node;

int main(){
    Node *node1;

    node1 = malloc(sizeof(Node));

    node1->x = 10;
    node1->y=20;

    printf("%d \n", node1->x);
    printf("%d \n", node1->y);


    return 0;
}