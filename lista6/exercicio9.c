#include<stdio.h>

// procedimento 1
void p1(int m[10][10]) {
    int swap=0;
    for(int i=0; i<10; i++) {
        swap = m[7][i];
        m[7][i] = m[1][i];
        m[1][i] = swap;
    }
}

// procedimento 2
void p2(int m[10][10]) {
    int swap=0;
    for(int i=0; i<10; i++) {
        swap = m[i][3];
        m[i][3] = m[i][9];
        m[i][9] = swap;
    }
}

// procedimento 3
void p3(int m[10][10]) {
    int swap=0;
    for(int i=0; i<10; i++) {
        swap = m[i][9-i];
        m[i][9-i] = m[i][i];
        m[i][i] = swap;
    }
}

void imprime_matriz_10x10(int m[10][10]) {
    for(int i=0; i<10; i++) {
        for(int j=0; j<10; j++)
            printf("%d ", m[i][j]);
        printf("\n");
    }
}

int main() {
    int m[10][10], swap=0;

    // preenchendo a matriz
    for(int i=0; i<10; i++)
        for(int j=0; j<10; j++)
            m[i][j] = i*5+j*2+10;

    printf("Matriz original:\n");
    imprime_matriz_10x10(m);

    p1(m);
    printf("\nMatriz depois do procedimento 1:\n");
    imprime_matriz_10x10(m);

    p2(m);
    printf("\nMatriz depois do procedimento 2:\n");
    imprime_matriz_10x10(m);

    p3(m);
    printf("\nMatriz depois do procedimento 3:\n");
    imprime_matriz_10x10(m);
}