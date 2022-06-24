#include<stdio.h>

void main() {
    // Variáveis
    int n=0, nove=0, dois=0, cinco=0, t=0;

    // Entradas e verificação da divisibilidade
    for(int i=0; i<10; i++) {
        scanf("%d", &n);
        if(n%2 == 0) {
            dois++;
        }
        if(n%5 == 0) {
            cinco++;
        }
        if(n%9 == 0) { // se é divisível por 9, então é divisivel por 3
            nove++;
        }
        if(n%2 != 0 && n%5 != 0 && n%9 != 0) { 
            printf("Número não é divisível pelos valores\n");
        }
    }

    // Saídas
    printf("3 e 9: %d\n", nove);
    printf("2: %d\n", dois);
    printf("5: %d\n", cinco);
}