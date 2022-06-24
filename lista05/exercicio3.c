#include<stdio.h>

int divisao(int numerador, int denominador) {
    // Caso base
    // Retorna 0 pois não é mais possível subtrair sem que o quociente fique negativo 
    if(numerador-denominador < 0) return 0;
    // Passo recursivo 
    // Retorna a próxima subtração somado a 1, já que num-den >= 0 
    else return divisao(numerador-denominador, denominador) + 1;
}

void main() {
    int numerador=0, denominador=0;  

    scanf("%d %d", &numerador, &denominador);

    printf("%d\n", divisao(numerador, denominador));
}