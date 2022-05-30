#include<stdio.h>
#include<stdlib.h>
#include<string.h>

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

compromisso* registrar() {
    compromisso *compro = (compromisso*)malloc(sizeof(compromisso));
    printf("Data: ");
    scanf("%d %d %d", &compro->data.dia, &compro->data.mes, &compro->data.ano);
}

int main() {
    int comando = 0;

    while(comando != -1) {
        printf("1- Registrar compromisso\n2- Listar todos os compromissos\n3- Listar compromissis de um mes\n");
        scanf("%d", &comando);
        switch(comando) {
            case 1:

        }
    }
}