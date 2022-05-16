#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define ERRO -1

// 80% do código foi feito pelo Github Copilot

// Tive que passar o tamanho da lista como argumento, pois o tamanho da lista é dinâmico
int encontra_nome(char **lista, int tamanho, char *nome) {
    for(int i=0; i<tamanho; i++) {
        if(strcmp(lista[i], nome) == 0) {
            return i;
        }
    }
    return ERRO;
}

// Tive que passar a lista como argumento, pois estava dando erro de segmentation fault
int lista_por_incial(char **lista, int tamanho, char **saida, char letra) {
    int x=0, y=0;
    for(int i=0; i<tamanho; i++) {
        if(lista[i][0] == letra) {
            x++;
        }
    }
    saida = malloc(x * sizeof(char*));
    for(int i=0; i<tamanho; i++) {
        if(lista[i][0] == letra) {
            saida[y++] = lista[i];
        }
    }
    return y;
}

int main() {
    char **meus_pokemons;
    int n;

    scanf("%d", &n);

    meus_pokemons = (char**) malloc(n * sizeof(char*));

    for(int i=0; i<n; i++) {
        meus_pokemons[i] = (char*) malloc(30 * sizeof(char));
        scanf("%s", meus_pokemons[i]);
    }

    int pos = encontra_nome(meus_pokemons, n, "Togepi");

    if(pos != ERRO) {
        printf("Possui Togepi\n");
    } else {
        printf("Nao possui Togepi\n");
    }

    char **lista;
    int s = lista_por_incial(meus_pokemons, n, lista, 'p');
    printf("%d\n", s);
    printf("Lista de pokemons com inicial p: \n");
    for(int i=0; i<s; i++) {
        printf("%s\n", lista[i]);
    }
}