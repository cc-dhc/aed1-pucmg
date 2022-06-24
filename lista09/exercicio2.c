#include<stdio.h>
#include<stdlib.h>
#include<string.h>

enum dias {
    Domingo,
    Segunda,
    Terca,
    Quarta,
    Quinta,
    Sexta,
    Sabado
};

int main() {
    char mat[7][30] = {
        "Domingo",
        "Segunda",
        "Terca",
        "Quarta",
        "Quinta",
        "Sexta",
        "Sabado"
    };
    
    char dia[30];
    int num = -1;

    scanf("%s", dia);

    // Comparando a entrada com os elementos do array
    for (int i = 0; i < 7; i++) {
        if(strcmp(mat[i], dia) == 0) {
            num = i;
            break;
        }
    }

    if(num == -1) {
        printf("Dia invalido\n");
    }

    switch(num) {
        case Domingo:
        case Sabado:
        printf("Final de semana\n");
        break;
        default:
        printf("Dia de semana\n");
    }
}