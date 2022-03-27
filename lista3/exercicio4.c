#include<stdio.h>

void main() {
    // Variáveis
    int n=0;
    float e=1, f=1;

    // Entradas
    scanf("%d", &n);

    // Atribuições
    for(int i=1; i<=n; i++) {
        f *= i;
        e += 1/f;
    }

    // Saídas
    printf("E: %.2f\n", e);
}