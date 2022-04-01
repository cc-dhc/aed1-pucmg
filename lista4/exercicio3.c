#include<stdio.h>

void crescente(int n1, int n2, int n3) {
    int temp=0;
    while(!(n1 < n2 && n2 < n3)) {
        if(n1 > n2) {
            temp = n1;
            n1 = n2;
            n2 = temp;
        }
        if(n2 > n3) {
            temp = n2;
            n2 = n3;
            n3 = temp;
        }
    }
    printf("%d %d %d\n", n1, n2, n3);
}

void main() {
    // Variáveis
    int n=0, n1=0, n2=0, n3=0;

    // Leitura de N
    scanf("%d", &n);

    for(int i=0; i<n; i++) {
        scanf("%d %d %d", &n1, &n2, &n3);
        crescente(n1, n2, n3);
    }
}