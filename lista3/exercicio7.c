#include<stdio.h>

void main() {
    // Variáveis
    int l=0, x1=0, x2=1, temp=0;

    // Entradas
    scanf("%d", &l);

    // Primeiro valor
    printf("1\n");

    // Laço para calcular e imprimir os valores da sequência
    for(int i=1; i<l; i++) {
        temp = x1+x2;
        printf("%d\n", temp);
        x1 = x2;
        x2 = temp;
    }
}