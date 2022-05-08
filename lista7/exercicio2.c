#include<stdio.h>

int main() {
    int x=10, *p=&x;

    printf("%d\n", p);
    
    p++; // O endereço do ponteiro (valor de p) é alterado para +4, já que int ocupa 4 bytes.
    
    printf("%d\n", p);

    printf("%d\n", *p);

    // *p era 10, mas agora é 11 pois o valor de x foi alterado ()
    (*p)++;
    printf("%d\n", *p);

    
}