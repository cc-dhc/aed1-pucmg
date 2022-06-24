#include<stdio.h>

void main(void) {
    // Variáveis
    float juros = 1.01, valor = 500;

    // Atribuições
    valor *= juros;
    valor *= juros;
    valor *= juros;

    // Saída
    printf("rendimento = %.2f\n", valor);
}