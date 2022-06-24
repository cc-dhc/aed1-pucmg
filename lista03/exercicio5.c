#include<stdio.h>

void main() {
    // Variáveis
    float maior_salario=0, salarios=0, salario=0, qnt=0;
    int filhos=0, filho=0, ate_100=0;

    // Entradas
    while(1) {
        scanf("%f %d", &salario, &filho);
        if(salario < 0) {
            break;
        }
        if(salario <= 100) {
            ate_100++;
        }
        salarios += salario;
        filhos += filho;
        qnt++;
        if(salario > maior_salario) {
            maior_salario = salario;
        }
    }

    // Atribuições
    

    // Saídas
    printf("Média de salário: %.2f\n", salarios/qnt);
    printf("Média de filhos: %.2f\n", filhos/qnt);
    printf("Maior salário: %.2f\n", maior_salario);
    printf("Porcentagem de pessoas com salário<=100: %.2f\n", ate_100/qnt);
}