#include<stdio.h>

void main() {
    // Variáveis
    int l=0, x1=0, x2=1, temp=0;

    // Entradas
    scanf("%d", &l);

    // Como a sequência começa em 1, se l<0 então o programa deve ser finalizado
    if(l < 1) {
        return;
    }

    // Primeiro valor
    printf("1\n");

    // Laço para calcular e imprimir os valores da sequência
    while(1) {
        temp = x1+x2;
        if(temp >= l) {
            break;
        }
        printf("%d\n", temp);
        x1 = x2;
        x2 = temp;
    }
}