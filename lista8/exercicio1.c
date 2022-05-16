#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

int* aloca(int n, int preenche) {
    if(preenche == TRUE) {
        return calloc(0, n * sizeof(int));
    } else if(preenche == FALSE) {
        return malloc(n * sizeof(int));
    }
}

void imprime(int* v, int n) {
    for(int i=0; i<n; i++) {
        printf("%d ", *(v+i));
    }
    printf("\n");
}

void preenche(int* v, int n, int valor, int is_aleatorio) {
    if(is_aleatorio == TRUE) {
        for(int i=0; i<n; i++) {
            *(v+i) = rand()%100;
        }
    } else {
        for(int i=0; i<n; i++) {
            *(v+i) = valor;
        }
    }
}

void inverte(int* v, int n) {
    int swap=0;
    for(int i=0; i<n/2; i++) {
        swap = *(v+i);
        *(v+i) = *(v+n-1-i);
        *(v+n-1-i) = swap;
    }
}

int main() {
    int *v1, *v2;

    v1 = aloca(10, FALSE);
    v2 = aloca(10, TRUE);

    if(v1 == NULL || v2 == NULL) return 1;

    printf("V1: \n");
    imprime(v1, 10);
    printf("V2: \n");
    imprime(v2, 10);

    printf("Preenche V1: \n");
    preenche(v1, 10, 0, TRUE);
    imprime(v1, 10);

    printf("Inverte: \n");
    inverte(v1, 10);
    inverte(v2, 10);
    
    printf("V1: \n");
    imprime(v1, 10);
    printf("V2: \n");
    imprime(v2, 10);
}