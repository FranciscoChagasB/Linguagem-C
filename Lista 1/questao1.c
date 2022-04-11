#include <stdio.h>

int main(){
  
  int x1, x2, x3;
  
  x1 = 7 + 3*6/2-1;
  printf("O valor de x1 foi : %d\n", x1);
//A ordem foi: [3*6 = 18] > [18/2 = 9]  > [7+9 = 16] > [16-1 = 15].
  
  x2 = 2%2 + 2*2-2/2;
  printf("O valor de x2 foi : %d\n", x2);
//A ordem foi: [2%2 = 0] > [2*2 = 4] > [2/2 = 1] > [0+4 = 4] > [4-1 = 3].
  
  x3 = (3 * 9 * (3 + (9*3/ (3) ) ) );
  printf("O valor de x3 foi : %d\n", x3);
//A ordem foi: [(3) = 3] > [9*3 = 27] > {27/3 = 9} > [9+3 = 12] > [3*9 = 27] > [27*12 = 324].

//Logo a ordem de operações é: operações do parêntese interno > operações do parêntese externo > resto da divisão > multiplicação > divisão > soma > subtração.
  
}
