78 #include<stdio.h>

void func(int * a, int * b) {
    int swap;
    if (*b > *a) {
        swap = *a;
        *a = *b;
        *b = swap;
    }
}

int main() {
    int x=0, y=0;

    scanf("%d %d", &x, &y);

    func(&x, &y);

    printf("%d %d\n", x, y);
}