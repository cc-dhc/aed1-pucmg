#include<stdio.h>

void main(void) {
    // Variáveis
    int n=0;

    // Entrada
    scanf("%d", &n);

    if(n > 9999 || n < 1000) {
        printf("Número inválido.\n");
        return;
    }

    // Saída
    printf("%d%d%d%d\n", n%10, (n%100)/10, (n%1000)/100, n/1000);
}