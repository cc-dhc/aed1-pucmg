#include<stdio.h>

void imprimir(int a, int b) {
    if(a > b) printf("Intervalo inválido.\n");
    else if(a == b) printf("%d\n", a);
    else {
        printf("%d\n", a);
        return imprimir(a+1, b);
    }
}

void main() {
    int a=0, b=0;

    scanf("%d %d", &a, &b);

    imprimir(a, b);
}