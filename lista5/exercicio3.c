#include<stdio.h>

int divisao(int numerador, int denominador) {
    if(numerador-denominador < 0) return 0;
    else return divisao(numerador-denominador, denominador) + 1;
}

void main() {
    int numerador=0, denominador=0;  

    scanf("%d %d", &numerador, &denominador);

    printf("%d\n", divisao(numerador, denominador));
}