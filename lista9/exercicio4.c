#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct carro_ {
    char modelo[20];
    float consumo;
} carro;

int main() {
    int n, melhor_consumo = 0;
    char melhor_modelo[20];
    scanf("%d", &n);
    
    carro carros[n];

    for(int i=0; i<n; i++) {
        scanf("%s %f", carros[i].modelo, &carros[i].consumo);
        if(carros[i].consumo > melhor_consumo) {
            melhor_consumo = carros[i].consumo;
            strcpy(melhor_modelo, carros[i].modelo);
        }
    }

    printf("%s\n", melhor_modelo);
}