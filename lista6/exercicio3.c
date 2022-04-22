#include<stdio.h>
#include<string.h>

int contaVogais(char frase[]) {
    int n=0; // Contador de vogais
    for(int i=0; i<strlen(frase); i++) {
        switch(frase[i]) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                n++; // É vogal
        }
    }
    return n;
}

int main() {
    char a[] = {'a', 'e', 'p', '\0'};
    printf("%d\n", contaVogais(a));
}