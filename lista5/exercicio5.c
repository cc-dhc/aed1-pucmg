#include<stdio.h>

double serie(int n, int fat) {
    printf("%d %d\n", n, fat);
    if(fat == 1) return 1;
    
     return (serie(n-1, fat/n) + 1.0/fat);
}

void main() {
    int n=0, fat=1;  

    scanf("%d", &n);

    for(int i=2; i<=n; fat*=i++);

    printf("%.2lf\n", serie(n, fat));
}