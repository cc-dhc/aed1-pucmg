#include<stdio.h>
#include<math.h>

void main(void) {
    // Variáveis
    int superior=pow(2, 31)-1, inferior=-pow(2, 31)+1;

    // Limites do tipo int
    printf("limite superior = %d\n", superior);
    printf("limite superior = %d\n", inferior);

    // Overflow
    printf("superior +1 = %d\n", superior+1);
    printf("limite -1 = %d\n", inferior-1);
}