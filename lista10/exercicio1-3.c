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

void registrar(compromisso *compromisso) {
    printf("Data: ");
    scanf("%d/%d/%d", &compromisso->data.dia, &compromisso->data.mes, &compromisso->data.ano);
    printf("Hora: ");
    scanf("%d:%d:%d", &compromisso->hora.horas, &compromisso->hora.minutos, &compromisso->hora.segundos);

    printf("Descricao (ate 100 caracteres): ");
    scanf("%s", compromisso->descricao);
}

void imprimir(compromisso compromisso) {
    printf("Compromisso: %s\nData: %d/%d/%d\nHora: %d:%d:%d\n",
    compromisso.descricao,
    compromisso.data.dia, compromisso.data.mes, compromisso.data.ano, 
    compromisso.hora.horas, compromisso.hora.minutos, compromisso.hora.segundos);
}

int main() {
    int comando = 0, quantidade = 0;
    compromisso compromissos[MAX];

    while(1) {
        //Menu
        printf("1- Registrar compromisso\n2- Listar todos os compromissos\n3- Listar compromissos de um mes\n4- Salvar agenda\n5- Carragar agenda salva\n6- Sair\n> ");
        scanf("%d", &comando);
        switch(comando != 6) {
            case 1:
                registrar(&compromissos[quantidade]);
                quantidade++;
                break;
            case 2:
                for(int i=0; i<quantidade; i++) {
                    imprimir(compromissos[i]);
                }
                break;
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
            case 6:
                
                break;
            default:
                printf("Comando invalido\n");
        }
    }
}