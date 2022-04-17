#include<stdio.h>

// Conta os dígitos de n
int contador(int n) {
    // Caso base: como n e 10 são inteiros, a divisão é inteira
    // Retorna 1, ja que 10 é o menor inteiro de dois dígitos 
    if(n/10 == 0) return 1;
    // Passo recursivo: divisão inteira por 10 é o mesmo que remover o menor digito de um número
    // Somar 1 para ir "contando" os dígitos removidos
    else return contador(n/10) + 1; 
}

void main() {
    int n=0;   

    scanf("%d", &n);

    printf("%d\n", contador(n));
}