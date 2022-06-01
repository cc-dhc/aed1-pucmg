// Mais uma vez, obrigado Github Copilot

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX 50
#define FLAG -1
#define ANO 2022

struct data_ {
    int dia;
    int mes;
    int ano;
};

struct hora_ {
    int horas;
    int minutos;
    int segundos;
};

typedef struct compromisso_ {
    struct data_ data;
    struct hora_ hora;
    char descricao[100];
} compromisso;

void escrever_compromissos(char *caminho, compromisso *compromissos, int quantidade) {
    FILE *arquivo = fopen(caminho, "w");
    fwrite(compromissos, sizeof(compromisso), quantidade, arquivo);
}

void ler_compromissos(char *caminho, compromisso *compromissos) {
    FILE *arquivo = fopen(caminho, "r");
    fseek(arquivo, 0, SEEK_END);
    int quantidade = ftell(arquivo)/sizeof(compromisso);
    fseek(arquivo, 0, SEEK_SET);

    compromissos = realloc(compromissos, sizeof(compromisso)*quantidade);

    for(int i = 0; i < quantidade; i++)
    {
        fread(&compromissos[i], sizeof(compromisso), 1, arquivo);
    }    
    fclose(arquivo);
}

void registrar(compromisso *compromissos, int quantidade) {
    compromissos = (compromisso *)realloc(compromissos, sizeof(compromisso)*quantidade+1);

    printf("Data: ");
    scanf("%d/%d/%d", 
    &compromissos[quantidade].data.mes, 
    &compromissos[quantidade].data.mes, 
    &compromissos[quantidade].data.ano);

    printf("Hora: ");
    scanf("%d:%d:%d", 
    &compromissos[quantidade].hora.horas, 
    &compromissos[quantidade].hora.minutos, 
    &compromissos[quantidade].hora.segundos);

    printf("Descricao (ate 100 caracteres): ");
    scanf("%s", compromissos[quantidade].descricao);
}

void imprimir(compromisso compromisso) {
    printf("Compromisso: %s\nData: %d/%d/%d\nHora: %d:%d:%d\n",
    compromisso.descricao,
    compromisso.data.dia, compromisso.data.mes, compromisso.data.ano, 
    compromisso.hora.horas, compromisso.hora.minutos, compromisso.hora.segundos);
}

int main() {
    int comando = 0, quantidade = 0;
    char caminho[100];
    compromisso *compromissos = NULL;

    while(comando != 6) {
        //Menu
        printf("1- Registrar compromisso\n2- Listar todos os compromissos\n3- Listar compromissos de um mes\n4- Salvar agenda\n5- Carragar agenda salva\n6- Sair\n> ");
        scanf("%d", &comando);
        switch(comando) {
            // Registrar compromisso
            case 1:
                registrar(compromissos, quantidade);
                quantidade++;
                break;
            case 2:
            // Listar todos os compromissos
                for(int i=0; i<quantidade; i++) {
                    imprimir(compromissos[i]);
                }
                break;
            // Listar compromissos de um mes
            case 3:
                int mes;
                printf("Mes: ");
                scanf("%d", &mes);
                for(int i=0; i<quantidade; i++) {
                    if(compromissos[i].data.ano == ANO && compromissos[i].data.mes == mes) {
                        imprimir(compromissos[i]);
                    }
                }
                break;
            // Salvar agenda
            case 4:
                printf("Caminho do arquivo: ");
                scanf("%s", caminho);
                escrever_compromissos(caminho, compromissos, quantidade);
                break;
            // Carregar agenda salva
            case 5:
                printf("Caminho do arquivo: ");
                scanf("%s", caminho);
                ler_compromissos(caminho, compromissos);
                break;
            // Sair
            case 6:
                
                break;
            default:
                printf("Comando invalido\n");
        }
    }
}