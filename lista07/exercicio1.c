#include<stdio.h>

int main() {
    // Escreva um programa em C que leia dois inteiros, armazenando-os em variáveis.
    int a=0, b=0;
    scanf("%d", &a);
    scanf("%d", &b);

    // O programa deve comparar os endereços das variáveis e exibir o maior deles.
    printf("%d\n", &a>&b ? &a : &b);
}