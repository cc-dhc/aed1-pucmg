#include<stdio.h>
#include<string.h>

// retorna 0 quando é palidromo e -1 quando não é
int palindromo(char frase[], int pos) {
    if(pos > strlen(frase)/2) return 0;
    if(frase[pos] != frase[strlen(frase)-1-pos]) return -1;
    else return palindromo(frase, pos+1);
}

int main() {
    char a[] = {'a', 'r', 'a', 'r', '\0'};
    printf("%d\n", palindromo(a, 0));
}