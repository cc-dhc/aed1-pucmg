#include<stdio.h>

double serie(int n, int fat) {
    if(fat == 1) return 1; // Caso base
    return serie(n-1, fat/n) + 1.0/fat; // Passo recursivo
}

void main() {
    int n=0, fat=1;  

    scanf("%d", &n);

    for(int i=2; i<=n; fat*=i++); // Fatorial fora da função recursiva

    printf("%.2lf\n", serie(n, fat));
}