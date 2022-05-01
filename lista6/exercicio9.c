#include<stdio.h>

void p1(int m[10][10]) {
    int swap=0;
    for(int i=0; i<10; i++) {
        swap = m[8][i];
        m[8][i] = m[2][i];
        m[2][i] = swap;
    }
}

void p2(int m[10][10]) {
    int swap=0;
    for(int i=0; i<10; i++) {
        swap = m[i][4];
        m[i][4] = m[i][10];
        m[i][10] = swap;
    }
}

void p3(int m[10][10]) {
    int swap=0;
    for(int i=0; i<10; i++) {
        swap = m[9-i][9-i];
        m[9-i][9-i] = m[i][i];
        m[i][i] = swap;
    }
}

int main() {
    int m[10][10], swap=0;

    for(int i=0; i<10; i++)
        for(int j=0; j<10; j++)
            m[i][j] = i*5+j*2+10;

    printf("Matriz original:\n");
    for(int i=0; i<10; i++) {
        for(int j=0; j<10; j++)
            printf("%d ", m[i][j]);
        printf("\n");
    }


}