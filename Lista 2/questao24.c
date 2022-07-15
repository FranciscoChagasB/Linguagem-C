#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main(int argc, char const *argv[])
{
    int cateto1=0, cateto2 = 0, hipotenusa = 0, c1c2 = 0,tp = 0, cont=0;

    for (hipotenusa  = 1; hipotenusa < 500; hipotenusa++){
       for (cateto1 = 1; cateto1 < 500; cateto1++){
           for (cateto2 = 1; cateto2 < 500; cateto2++){
               c1c2 = pow(cateto1, 2) + pow(cateto2,2);
               tp = pow(hipotenusa, 2);
               (c1c2 == tp) ? printf("%d %d = %d \n", cateto1, cateto2, hipotenusa) : 0;
           }    
       }
       
    }
    

    return 0;
}
