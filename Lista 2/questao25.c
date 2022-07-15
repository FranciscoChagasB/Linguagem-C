#include <stdio.h>

int main(int argc, char const *argv[])
{
    double pi = 0, razao = 1;
    for (int i = 1; i<1000; i++)
    {
        pi+=(i % 2 != 0) ? (4 / razao) : -(4 / razao);
        razao += 2;
    }
    printf("O valor aproximado e:%.2f", pi);

    return 0;
}