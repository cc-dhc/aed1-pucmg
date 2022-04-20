#include<stdio.h>

// Soma os dígitos de n
int somador(int n) {
    // Caso base: retorna n pois esse é o último dígito a ser somado
    if(n/10 == 0) return n;
    // Passo recursivo: divisão inteira de n por 10 é o mesmo que remover o menor digito de n
    // O resto da divisão de n por 10 corresponde ao valor do menor dígito de n
    else return somador(n/10) + n%10;
}

void main() {
    int n=0;   

    scanf("%d", &n);

    printf("%d\n", somador(n));
}