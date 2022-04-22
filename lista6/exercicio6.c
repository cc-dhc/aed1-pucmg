#include<stdio.h>

int a(int m[5][5]) {
    int s=0;
    for(int i=0; i<5; i++)
        s+=m[4][i];

    return s;
}

int b(int m[5][5]) {
    int s=0;
    for(int i=0; i<5; i++)
        s+=m[i][2];

    return s;
}

int c(int m[5][5]) {
    int s=0;
    for(int i=0; i<5; i++)
        s+=m[i][i];

    return s;
}

int d(int m[5][5]) {
    int s=0;
    for(int i=4; i>=0; i--)
        s+=m[i][i];

    return s;
}

int e(int m[5][5]) {
    int s=0;
    for(int i=0; i<5; i++) 
        for(int j=0; j<5; j++)
            s+=m[i][j];

    return s;
}

int main() {
    int m[5][5] = {1,2,3,4,5,1,2,3,4,5,1,2,3,4,5,1,2,3,4,5,1,2,3,4,5};
    printf("a = %d\n", a(m));
    printf("b = %d\n", b(m));
    printf("c = %d\n", c(m));
    printf("d = %d\n", d(m));
    printf("e = %d\n", e(m));
}   