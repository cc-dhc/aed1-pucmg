#include<stdio.h>

void main() {
    // Variáveis
    int q=0, n=0;
    float pos=0, zeros=0;

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
    printf("Positivos: %.2f\n", pos/q);
    printf("Negativos: %.2f\n", (q-pos-zeros)/q);
    printf("Zeros: %.2f\n", zeros/q);
}