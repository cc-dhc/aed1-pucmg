#include<stdio.h>

void main(void) {
    // Variáveis
    char aumento=0;
    float salario=0;

    // Entrada
    scanf("%c %f", &aumento, &salario);

    // Saída
    switch(aumento) {
        case 'A':
            salario *= 1.08;
        break;
        case 'B':
            salario *= 1.11;
        break;
        case 'C':
            if(salario > 1000) {
                salario += 200;
            } else {
                salario += 350;
            }
        break;
    }

    // Saída
    printf("%.2f\n", salario);
}