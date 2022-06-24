#include<stdio.h>

void main() {
    // Variáveis
    int q=0, pos=0, zeros=0, n=0;

    // Entradas
    scanf("%d", &q);

    // Leitura dos números e verificação do sinal
    for(int i=0; i<q; i++) {
        scanf("%d", &n);
        if(n == 0) {
            zeros++;
        } else if(n > 0) {
            pos++;
        }
    }

    // Saídas
    printf("Positivos: %d\n", pos);
    printf("Negativos: %d\n", q-pos-zeros);
    printf("Zeros: %d\n", zeros);
}