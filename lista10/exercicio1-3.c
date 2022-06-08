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

typedef struct agenda_ {
    compromisso *compromissos;
    int tamanho;
} agenda;

void escrever_agenda(agenda *agenda_principal) {
    printf("escrever_agenda\n");
    char caminho[100];
    printf("Caminho do arquivo: ");
    scanf("%s", caminho);
    printf("%s", caminho);
    FILE *arquivo = fopen(caminho, "wb");
    if(arquivo == NULL) printf("Não foi possivel abrir o arquivo\n");
    printf("suave ate aq\n");
    printf("tamanho: %d\n", agenda_principal->tamanho);
    fwrite(agenda_principal->compromissos, sizeof(compromisso), agenda_principal->tamanho, arquivo);
    fclose(arquivo);
}

agenda ler_agenda() {
    char caminho[100];

    printf("Caminho do arquivo: ");
    scanf("%s", caminho);
    agenda agenda_lida = {NULL, 0};

    FILE *arquivo = fopen(caminho, "rb");
    if(arquivo == NULL) printf("Não foi possivel abrir o arquivo\n");

    fseek(arquivo, 0, SEEK_END);
    agenda_lida.tamanho = ftell(arquivo)/sizeof(compromisso);
    fseek(arquivo, 0, SEEK_SET);

    agenda_lida.compromissos = (compromisso*) malloc(agenda_lida.tamanho*sizeof(compromisso));
    
    fread(agenda_lida.compromissos, sizeof(compromisso), agenda_lida.tamanho, arquivo);

    fclose(arquivo);

    return agenda_lida;
}

int registrar_compromisso(agenda *agenda_principal) {
    compromisso *compromissos = (compromisso *) realloc(
        agenda_principal->compromissos, 
        sizeof(agenda)*(agenda_principal->tamanho+1)
    );

    if(compromissos == NULL) return -1; 

    printf("Data: ");
    scanf("%d/%d/%d", 
    &compromissos[agenda_principal->tamanho].data.mes, 
    &compromissos[agenda_principal->tamanho].data.mes, 
    &compromissos[agenda_principal->tamanho].data.ano);

    printf("Hora: ");
    scanf("%d:%d:%d", 
    &compromissos[agenda_principal->tamanho].hora.horas, 
    &compromissos[agenda_principal->tamanho].hora.minutos, 
    &compromissos[agenda_principal->tamanho].hora.segundos);

    printf("Descricao (ate 100 caracteres): ");
    scanf("%s", compromissos[agenda_principal->tamanho].descricao);

    agenda_principal->tamanho++;
    agenda_principal->compromissos = compromissos;

    return 0;
}

void imprimir(compromisso compromisso) {
    printf("Compromisso: %s\nData: %d/%d/%d\nHora: %d:%d:%d\n",
    compromisso.descricao,
    compromisso.data.dia, compromisso.data.mes, compromisso.data.ano, 
    compromisso.hora.horas, compromisso.hora.minutos, compromisso.hora.segundos);
}

int main() {
    int comando = 0, mes;
    char caminho[100];
    agenda agenda_principal = {NULL, 0};
    agenda_principal.compromissos = (compromisso*)malloc(sizeof(compromisso)*1);

    while(comando != 6) {
        //Menu
        printf("1- Registrar compromisso\n2- Listar todos os compromissos\n3- Listar compromissos de um mes\n4- Salvar agenda\n5- Carragar agenda salva\n6- Sair\n> ");
        
        scanf("%d", &comando);
        switch(comando) {
            // Registrar compromisso
            case 1:
                if(registrar_compromisso(&agenda_principal) != 0)
                    printf("Erro: Não foi possivel registrar o compromisso.\n");
                break;
            // Listar todos os compromissos
            case 2:
                for(int i=0; i<agenda_principal.tamanho; i++)
                    imprimir(agenda_principal.compromissos[i]);
                break;
            // Listar compromissos de um mes
            case 3:
                printf("Mes: ");
                scanf("%d", &mes);
                for(int i=0; i<agenda_principal.tamanho; i++)
                    if(agenda_principal.compromissos[i].data.ano == ANO && agenda_principal.compromissos[i].data.mes == mes)
                        imprimir(agenda_principal.compromissos[i]);
                break;
            // Salvar agenda
            case 4:
                escrever_agenda(&agenda_principal);
                break;
            // Carregar agenda salva
            case 5:
                agenda_principal = ler_agenda();
                break;
            // Sair
            case 6:
                
                break;
            default:
                printf("Comando invalido\n");
        }
    }
}