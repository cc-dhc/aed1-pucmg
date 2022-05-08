#include<stdio.h>

int main() {
    int m[4][4] = {1, 2, 3, 4,1, 2, 3, 4,1, 2, 3, 4,1, 2, 3, 4};
    int s=0;
    
    for(int i=0; i<4; i++) {
        for(int j=i-1; j>=0; j--) {
            s+=m[i][j];
        }
    }

    printf("%d\n", s);
}