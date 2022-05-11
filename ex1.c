#include<stdio.h>

void soma_linhas(int m[3][3], int v[3]) {
    for(int i=0; i<3; i++)
        for(int j=0; j<3; j++)
            v[i] += m[i][j];
}

int main() {
    
}