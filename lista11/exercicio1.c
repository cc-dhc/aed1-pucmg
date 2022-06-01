#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void cifrar(FILE *arquivo) {
    while(!feof(arquivo)) {
        char letra = fgetc(arquivo), nova_letra = -1;
        
        if(letra >= 'A' && letra <= 'Z') {
            nova_letra = ((letra - 'A' + 3) % 25) + 'A';
        }
        
        if(letra >= 'a' && letra <= 'z') {
            nova_letra = ((letra - 'a' + 3) % 25) + 'a';
        }

        if(nova_letra != -1) {
            printf("%c -> %c\n", letra, nova_letra);
            fseek(arquivo, -1, SEEK_CUR);
            fputc(nova_letra, arquivo);
        }
    }
}

int main() {
    char caminho[100];

    scanf("%s", caminho);

    FILE *arquivo = fopen(caminho, "r+");

    cifrar(arquivo);

    fclose(arquivo);
}