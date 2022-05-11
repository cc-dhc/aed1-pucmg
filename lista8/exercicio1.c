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
        printf("%d", *(v+i));
    }
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
    }
}

int main() {
    int *v1, *v2;

    v1 = aloca(10, FALSE);
    v2 = aloca(10, TRUE);

    if(v1 == NULL || v2 == NULL) return 1;

    imprime(v1, 10);
    imprime(v2, 10);

    v1 = preenche(v1, 10, 314, TRUE);
    imprime(v1, 10);

    inverte(v1, 10);
    inverte(v2, 10);
    
    imprime(v1, 10);
    imprime(v2, 10);
}