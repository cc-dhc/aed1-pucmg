#include<stdio.h>

void triangulo(float x, float y, float z) {
    if(x >= y+z || y >= x+z || z >= x+y) {
        printf("Triangulo invalido.\n");
    } else if(x == y && x == z) {
        printf("Triangulo Equilatero.\n");
    } else if(x == y || x == z || y == z) {
        printf("Triangulo Isoceles.\n");
    } else {
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