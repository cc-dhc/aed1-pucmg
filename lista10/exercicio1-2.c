#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int conta_linhas(char *caminho) {
    FILE *arquivo = fopen(caminho, "r");
    int linhas = 0;
    linhas++;
    while(!feof(arquivo)) {
        char c = fgetc(arquivo);
        if(c == '\n') {
            linhas++;
        }
    }
    fclose(arquivo);
    return linhas;
}

int maior_linha(char *caminho) {
    FILE *arquivo = fopen(caminho, "r");
    int tamanho = 0, maior_tamanho = 0, maior=1, linha = 1;
    while(!feof(arquivo)) {
        char c = fgetc(arquivo);
        tamanho++;
        if(c == '\n') {
            if(tamanho > maior_tamanho) {
                maior_tamanho = tamanho;
                maior = linha;
            }
            tamanho = 0;
            linha++;
        }
    }
    fclose(arquivo);
    return maior;
}

int menor_linha(char *caminho) {
    FILE *arquivo = fopen(caminho, "r");
    int tamanho = 0, menor_tamanho=999, menor=1, linha = 1;
    while(!feof(arquivo)) {
        char c = fgetc(arquivo);
        tamanho++;
        if(c == '\n') {
            if(tamanho < menor_tamanho) {
                menor_tamanho = tamanho;
                menor = linha;
            }
            tamanho = 0;
            linha++;
        }
    }
    fclose(arquivo);
    return menor;
}

int *conta_vogais(char *caminho) {
    FILE *arquivo = fopen(caminho, "r");
    int *vogais = (int *) malloc(sizeof(int) * 5);
    for(int i=0; i<5; i++) {
        vogais[i] = 0;
    }
    while(!feof(arquivo)) {
        char c = fgetc(arquivo);
        switch(c) {
            case 'a':
            case 'A':
                vogais[0]++;
                break;
            case 'e':
            case 'E':
                vogais[1]++;
                break;
            case 'i':
            case 'I':
                vogais[2]++;
                break;
            case 'o':
            case 'O':
                vogais[3]++;
                break;
            case 'u':
            case 'U':
                vogais[4]++;
                break;
        }
    }
    fclose(arquivo);
    return vogais;
}

int main() {
    char caminho[100];
    
    scanf("%s", caminho);

    printf("%d\n", conta_linhas(caminho));
    printf("%d\n", maior_linha(caminho));
    printf("%d\n", menor_linha(caminho));

    int *vogais = conta_vogais(caminho);
    printf("A: %d E: %d I: %d O: %d U: %d\n", vogais[0], vogais[1], vogais[2], vogais[3], vogais[4]);

}