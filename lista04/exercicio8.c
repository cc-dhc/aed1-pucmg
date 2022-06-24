#include<stdio.h>

float func(int n) {
    float s=0;

    for(int i=1; i<=n; i++) { // Laço do somatório
        s += (i*i+1.0)/(i+3); // Cálculo e soma do quociente atual
    }

    return s;
}

void main() {
    // Variáveis
    int n=0, num=0;

    scanf("%d", &n);

    printf("%.2f\n", func(n)); // Resultado do somatório
}