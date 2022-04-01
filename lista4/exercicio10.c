#include<stdio.h>

char categoria(int idade) {
    if(idade >= 5 && idade <= 7) {
        return 'F';
    } else if(idade <= 10) {
        return 'E';
    } else if(idade <= 13) {
        return 'D';
    } else if(idade <= 15) {
        return 'C';
    } else if(idade <= 17) {
        return 'B';
    } else {
        return 'A';
    }
}

void main() {
    // Variáveis
    int idade=0;

    scanf("%d", &idade);

    printf("Categoria: %c\n", categoria(idade));
}