#include<stdio.h>

void sum(int a[4][6], int b[4][6], int r[4][6]) {
    for(int i=0; i<4; i++) {
        for(int j=0; j<6; j++) {
            r[i][j] = a[i][j] + b[i][j];
        }
    }
}

void sub(int a[4][6], int b[4][6], int r[4][6]) {
    for(int i=0; i<4; i++) {
        for(int j=0; j<6; j++) {
            r[i][j] = a[i][j] - b[i][j];
        }
    }
}

int main() {
    int a[4][6] = {1,2,3,4,5,6,1,2,3,4,5,6,1,2,3,4,5,6,1,2,3,4,5,6};
    int b[4][6] = {1,2,3,4,5,6,1,2,3,4,5,6,1,2,3,4,5,6,1,2,3,4,5,6};
    int r[4][6];
    sum(a, b, r);
    printf("%d", r[1][1]);
}