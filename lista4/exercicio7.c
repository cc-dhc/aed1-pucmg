#include<stdio.h>

int positivo(int num) {
    if(num >= 0) {
        return 1;
    } else {
        return 0;
    }
}

void main() {
    // Variáveis
    int n=0, num=0;

    scanf("%d", &n);

    for(int i=0; i<n; i++) {
        scanf("%d", &num);
        if(positivo(num)) {
            printf("Positivo.\n");
        } else {
            printf("Negativo.\n");
        }
    }
}