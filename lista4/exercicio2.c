#include<stdio.h>

void pesquisa(int n) {
    float salario=0, salario_total=0;
    int filhos=0;

    // Laço para a leitura dos salários
    for(int i=0; i<n; i++) {
        scanf("%f %i", &salario, &filhos);
        salario_total += salario;
    }

    printf("Média: %.2f\n", salario_total/n);
}

void main() {
    // Variáveis
    int n=0, filhos_total=0, filhos=0;
    float salario_total=0, salario=0;

    // Leitura de N
    scanf("%d", &n);

    pesquisa(n);
}