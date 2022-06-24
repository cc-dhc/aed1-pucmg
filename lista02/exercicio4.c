#include<stdio.h>

void main(void) {
    // Variáveis
    float nota=0;

    // Entrada
    scanf("%f", &nota);

    // Saída
    if(nota>=8 && nota <=10) {
        printf("Ótimo\n");
    } else if(nota>=7 && nota<8) {
        printf("Bom\n");
    } else if(nota>=5 && nota<7) {
        printf("Regular\n");
    } else {
        printf("Insatisfatório\n");
    }
}