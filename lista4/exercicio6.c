#include<stdio.h>

float func(int n) {
    int f=1;
    float s=1;

    for(int i=1; i<=n; i++) {   
        f *= i;
        s += 1.0/f;    
    }

    return s;
}

void main() {
    // Variáveis
    int n=0;

    scanf("%d", &n);

    printf("%.2f\n", func(n));
}