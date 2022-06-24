#include<stdio.h>
#define FLAG -99

int main() {
    int arr[50], t=0, size=0;

    for(int i=0; i<50; i++) {
        scanf("%d", &t);
        if(t == FLAG) {
            size = i; // "Novo" tamanho da arr
            break;
        }
        arr[i] = t;
    }
        
    printf("Valores:\tIndices:\n");

    for(int i=0; i<size; i++)
        printf("%d\t\t%d\n", arr[i], i);
}