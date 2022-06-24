#include<stdio.h>

float media(float n1, float n2, float n3, char tipo) {
    if(tipo == 'A') {
        return (n1+n2+n3)/3;
    } else if(tipo == 'P') {
        return (n1*5, n2*3, n3*2)/10;
    }
    return 0; // Retorna 0 se o tipo for diferente de 'A' ou 'B'
}

void main() {
    // Variáveis
    int n=0;
    float n1=0, n2=0, n3=0;
    char tipo=0;

    scanf("%d", &n);

    // Laço para a leitura de notas e saída da média
    for(int i=0; i<n; i++) {
        scanf("%f %f %f %c", &n1, &n2, &n3, &tipo);
        printf("Média: %.2f\n", media(n1, n2, n3, tipo));
    }
}