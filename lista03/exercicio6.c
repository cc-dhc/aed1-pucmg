#include<stdio.h>

void main() {
    // Variáveis
    int n=0;
    float s=0;

    // Entradas
    scanf("%d", &n);

    // Laço para calcular a soma
    for(int i=1; i<=n; i++) {
        s += 1.0/i;
        printf("[%d]: %.2f\n", i, s);
    }

    // Saídas
    printf("Soma: %.2f\n", s);
}