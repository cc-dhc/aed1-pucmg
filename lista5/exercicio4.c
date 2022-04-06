#include<stdio.h>

int resto(int numerador, int denominador) {
    if(numerador-denominador <0) return numerador;
    else return resto(numerador-denominador, denominador);
}

void main() {
    int numerador=0, denominador=0;  

    scanf("%d %d", &numerador, &denominador);

    printf("%d\n", resto(numerador, denominador));
}