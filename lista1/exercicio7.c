#include<stdio.h>

void main(void) {
    // Variáveis
    float a=0, b=0, c=0, aposta_total = 0, premio = 0;

    // Entrada
    scanf("%f %f %f %f", &a, &b, &c, &premio);

    aposta_total = a + b + c;

    //Saída
    printf("Pessoa A = %.2f\n", a*premio/aposta_total);
    printf("Pessoa B = %.2f\n", b*premio/aposta_total);
    printf("Pessoa C = %.2f\n", c*premio/aposta_total);
}