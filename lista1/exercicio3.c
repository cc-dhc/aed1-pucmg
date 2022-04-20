#include<stdio.h>
#include<math.h>

void main(void) {
    // Variáveis
    int a=0, b=0, c=0;
    double s=0;
    
    // Entradas
    scanf("%d %d %d", &a, &b, &c);

    // Atribuições
    s = (a+b+c)/2;

    // Saída
    printf("area = %.2lf\n", sqrt(s*(s-a)*(s-b)*(s-c)));
}