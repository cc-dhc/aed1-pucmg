#include<stdio.h>

char conceito(int nota) {
    if(nota <= 39) {
        return 'F';
    } else if(nota <= 59) {
        return 'E';
    } else if(nota <= 69) {
        return 'D';
    } else if(nota <= 79) {
        return 'C';
    } else if(nota <= 89) {
        return 'B';
    } else {
        return 'A';
    }
}

void main() {
    // Variáveis
    int n=0, nota=0;

    scanf("%d", &n);

    for(int i=0; i<n; i++) {
        scanf("%d", &nota);
        printf("Conceito: %c\n", conceito(nota));
    }
}