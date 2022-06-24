#include<stdio.h>
#include<math.h>

void main(void) {
    // Variáveis
    int b1=0, b2=0, b3=0, b4=0, n=0, valor=0;

    // a)
    // Entrada
    scanf("%d", &n);

    //Saída
    printf("%d bit(s) comporta(m) %.0f símbolo(s)\n", n, pow(2, n));

    // b)
    // Entradas
    scanf("%d %d %d %d", &b1, &b2, &b3, &b4);

    // Atribuições
    valor = b1*pow(2, 3) + b2*pow(2, 2) + b3*pow(2, 1) + b4*pow(2, 0);

    // Saída
    printf("%d\n", valor);
}