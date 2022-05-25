#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

typedef struct nota_ {
    char id;
    float valor;
}nota;

int main() {
    nota notas[7];
    char ids[] = "WHQESTX";

    for(int i=0; i<7; i++) {
        notas[i].id = ids[i];
        notas[i].valor = pow(2, -i);
    }

    char musica[100];
    int tamanho;
    scanf("%s%n", musica, &tamanho);

    float total = 0;
    int resposta = 0;

    for(int i=0; i<tamanho; i++) {
        if(musica[i] == '/') {
            total = 0;
            i++;
            while(musica[i] != '/') {
                for(int j=0; j<7; j++) {
                    if(musica[i] == notas[j].id) {
                        total += notas[j].valor;
                        break;
                    }
                }
                i++;
            }
            i--;
            if(total == 1) resposta++;
        }
    }

    printf("%d\n", resposta);
}