#include<stdio.h>

int main() {
    int a=0, *pa=&a;
    float b=0, *pb=&b;
    char c=0, *pc=&c;

    printf("A = %d, %d\n", a, &a);
    printf("B = %f, %d\n", b, &b);
    printf("C = %c, %d\n", c, &c);

    scanf("%d", pa);
    scanf("%f", pb);
    scanf("%c", pc);

    printf("A = %d, %d\n", a, &a);
    printf("B = %f, %d\n", b, &b);
    printf("C = %c, %d\n", c, &c);

}