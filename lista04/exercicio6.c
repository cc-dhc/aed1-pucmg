#include<stdio.h>

float func(int n) {
    int fatorial=1; // Variável que armazenará o valor o fatorial durante o laço
    float s=1; // O S da questão já começa em 1

    for(int i=1; i<=n; i++) {   
        fatorial *= i; // Atualização do fatorial
        s += 1.0/fatorial;   
    }

    return s;
}

void main() {
    // Variáveis
    int n=0;

    scanf("%d", &n);

    printf("%.2f\n", func(n));
}