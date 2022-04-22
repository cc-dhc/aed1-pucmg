#include<stdio.h>
#include<string.h>

void maiuscula(char frase[]) {
    for(int i=0; i<strlen(frase); i++) {
        if(frase[i] == ' ' && (frase[i+1] < 'A' || frase[i+1] > 'Z'))
            frase[i+1] -= 32;
    }
}

int main() {
    char a[] = {' ', 'a', ' ', 'Z'};
    maiuscula(a);
    printf("%s\n", a);
}