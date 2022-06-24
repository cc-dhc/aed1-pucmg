#include<stdio.h>

void main(void) {
    // Variáveis
    int ano=0;

    // Entrada
    scanf("%d", &ano);

    // Saída
    if((ano%100 != 0 && ano%4 == 0) || ano%400 == 0) {
        printf("bissexto\n");
    } else {
        printf("não é bissexto\n");
    }
}