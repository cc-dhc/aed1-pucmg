#include<stdio.h>

int contador(int n) {
    if(n/10 == 0) return 1;
    else return contador(n/10) + 1;
}

void main() {
    int n=0;   

    scanf("%d", &n);

    printf("%d\n", contador(n));
}