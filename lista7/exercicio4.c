#include <stdio.h>
int main() {
    int x, *p, **q;
    p = &x;
    q = &p;
    x = 10;

    // Basta imprimir q desreferenciado duas vezes
    printf("\n%d\n", **q);
}