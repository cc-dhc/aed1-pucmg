#include<stdio.h>

void main(void) {
    // Variáveis
    float diaria=0;

    // Entrada
    scanf("%f", &diaria);

    // Saída
    printf("%.2f\n", diaria*0.25);
    printf("%.2f\n", diaria*0.25*75*0.8);
    printf("%.2f\n", diaria*75*0.5);
    printf("%.2f\n", diaria-diaria*0.25);
}