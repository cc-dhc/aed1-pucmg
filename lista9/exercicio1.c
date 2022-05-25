#include<stdio.h>
#include<stdlib.h>

typedef struct eletro_ {
    char nome[30];
    float potencia;
    float ativo;
}eletro;

int main() {
    int n;
    float consumo_total = 0;
    
    scanf("%d", &n);
    eletro eletros[n];

    for (int i = 0; i < n; i++) {

        scanf("%s %f %f", eletros[n].nome, 
        &(eletros[n].potencia), &(eletros[n].ativo));
        printf("aaaaaaaaaaaaa\n");
        consumo_total += eletros[n].potencia*eletros[n].ativo;
    }

    for (int i = 0; i < n; i++) {
        printf("%s: %.2f\n", eletros[n].nome, 
        eletros[n].potencia*eletros[n].ativo/consumo_total);
    }

}