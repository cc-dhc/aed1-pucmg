#include<stdio.h>

int func(int * a, int * b, int * c) {
    int arr[3] = {*a, *b, *c}, swap=0;

    if(*a == *b && *b == *c) return 1;

    for(int i=0; i<2; i++) {
        if(arr[i] > arr[i+1]) {
            swap = arr[i+1];
            arr[i+1] = arr[i];
            arr[i] = swap;
            i=0;
        }
    }

    *a = arr[0];
    *b = arr[1];
    *c = arr[2];

    return 0;
}

int main() {
    int a=100, b=12, c=314, f=0;

    printf("%d %d %d\n", a, b, c);

    f = func(&a, &b, &c);

    printf("%d %d %d; retorno: %d\n", a, b, c, f);

}