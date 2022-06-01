#include<stdio.h>
#include<stdlib.h>

typedef struct eletro_ {
    char nome[30];
    float potencia;
    float ativo;
} eletrodomestico;

int main() {
    int n;
    float consumo_total = 0;
    
    scanf("%d", &n);
    eletrodomestico eletros[n];

    // Leitura dos eletrodomesticos
    for (int i = 0; i < n; i++) {
        scanf("%s", eletros[i].nome);
        scanf("%f %f", &eletros[i].potencia, &eletros[i].ativo);
        consumo_total += eletros[i].potencia*eletros[i].ativo*30;
    }

    // Porcentagem de consumo de cada eletrodomestico
    for (int i = 0; i < n; i++) {
        printf("%s: %.2f\n", eletros[n].nome, 
        eletros[n].potencia*eletros[n].ativo*30/consumo_total);
    }

}