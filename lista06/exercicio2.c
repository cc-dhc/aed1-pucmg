#include<stdio.h>
#define FLAG -99
// todo
int main() {
    int arr1[100]={0}, arr2[100]={0}, s1=0, s2=0, t=0, size=0;

    for(int i=0; i<100; i++) {
        scanf("%d", &t);
        if(t == FLAG) {
            s1 = i; // Tamanho do arr 1
            break;
        }
        arr1[i] = t;
    }
        
    for(int i=0; i<100; i++) {
        scanf("%d", &t);
        if(t == FLAG) {
            s2 = i; // Tamanho do arr 2
            break;
        }
        arr2[i] = t;
    }

    size = s1>s2?s1:s2; // Tamanho dos vetores

    for(int i=0; i<size; i++) { // Soma normal
        printf("%d ", arr1[i]+arr2[i]);
    }
    printf("\n");
    for(int i=0; i<size; i++) { // Soma reversa
        printf("%d ", arr1[i]+arr2[size-1-i]);
    }
    printf("\n");
}