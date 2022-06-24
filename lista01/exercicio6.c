#include<stdio.h>

void main(void) {
    // Variáveis
    int entrada=0, s=0, m=0, h=0;

    // Entrada
    scanf("%d", &entrada);

    // Atribuições
    s = entrada % 60;
    m = (entrada / 60) % 60;
    h = (entrada / 60) / 60;

    // Saída
    printf("%d:%d:%d\n", h, m, s);
}