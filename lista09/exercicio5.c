#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

typedef struct nota_ {
    char id;
    float valor;
} nota;

float letra_para_nota(char letra) {
    for(int i=0; i<7; i++) {
        if(letra == 'A' + i) {
            return i;
        }
    }
}

int main() {
    nota notas[7];
    char ids[] = "WHQESTX";

    // Definindo os valores das notas usando a lib de matematica
    for(int i=0; i<7; i++) {
        notas[i].id = ids[i];
        notas[i].valor = pow(2, -i);
    }

    char musica[100];
    int tamanho;
    scanf("%s%n", musica, &tamanho);

    float total = 0;
    int resposta = 0;

    // Fazendo o "parsing" da musica
    for(int i=0; i<tamanho; i++) {
        if(musica[i] == '/') {
            if(total == 1) resposta++;
            total = 0;
        }
        // Achando o valor da nota
        for(int j=0; j<7; j++) {
            if(musica[i] == notas[j].id) {
                total += notas[j].valor;
                break;
            }
        }
    }

    printf("%d\n", resposta);
}