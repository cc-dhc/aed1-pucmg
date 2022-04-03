#include<stdio.h>

void triangulo(float x, float y, float z) {
    // Primeiro, é preciso verificar se x, y e z são lados de um possível triângulo
    if(x >= y+z || y >= x+z || z >= x+y) { 
        printf("Triangulo invalido.\n");
    } else if(x == y && x == z) {
        printf("Triangulo Equilatero.\n");
    } else if(x == y || x == z || y == z) {
        printf("Triangulo Isoceles.\n");
    } else { // Resta apenas o triângulo escaleno, então não é preciso verificação
        printf("Triangulo Escaleno.\n");
    }
}

void main() {
    // Variáveis
    int n=0;
    float x=0, y=0, z=0;

    scanf("%d", &n);

    for(int i=0; i<n; i++) {
        scanf("%f %f %f", &x, &y, &z);
        triangulo(x, y, z);
    }
}