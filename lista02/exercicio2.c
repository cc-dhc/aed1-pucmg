#include<stdio.h>

void main(void) {
    // Variáveis
    float altura=0, peso=0, peso_ideal=0;
    char sexo=0;

    // Entrada
    scanf("%f %f %c", &altura, &peso, &sexo);

    // Atribuições
    switch(sexo) {
        case 'M':
            peso_ideal = 72.7*altura-58;
        break;
        case 'F':
            peso_ideal = 62.1*altura-44.7;
        break;
    }

    // Saída
    if(peso > peso_ideal) {
        printf("Acima\n%.2f\n", peso_ideal);
    } else {
        printf("Abaixo\n%.2f\n", peso_ideal);
    }
}
