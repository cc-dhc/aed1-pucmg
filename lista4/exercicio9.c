#include<stdio.h>

float media(int n) {
    float nota=0, notas=0;
    int aprovados=0;

    for(int i=0; i<n; i++) {
        scanf("%f", &nota);
        if(nota >= 6) {
            aprovados++;
            notas += nota;
        }
    }

    return notas/aprovados;
}

void main() {
    // Variáveis
    int n=0, num=0;

    scanf("%d", &n);

    printf("Media: %.2f\n", media(n));
}