#include<stdio.h>

// imprime a, a+1, a+2, ..., b
void imprimir(int a, int b) {
    if(a > b) printf("Intervalo inválido.\n"); // Caso base de intervalo inválido
    else if(a == b) printf("%d\n", a); // Caso base para onde o passo recursivo vai convergir
    else { // Passo recursivo que imprime a e converge para o caso base
        printf("%d\n", a);
        imprimir(a+1, b);
    }
}

void main() {
    int a=0, b=0;

    scanf("%d %d", &a, &b);

    imprimir(a, b);
}