#include<stdio.h>

int contador(int n) {
    if(n/10 == 0) return n;
    else return contador(n/10) + n%10;
}

void main() {
    int n=0;   

    scanf("%d", &n);

    printf("%d\n", contador(n));
}