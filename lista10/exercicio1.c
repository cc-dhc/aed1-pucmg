#include<stdio.h>
#include<stdlib.h>

int main() {
    FILE *alunos = fopen("alunos.txt", "r");
    FILE *medias = fopen("medias.txt", "w");

    while(feof(alunos)) {
        char nome[50], sobrenome[50];
        int matricula;
        float media=-1;
        fscanf(alunos, "%s %s %d\n", nome, sobrenome, &matricula);

        FILE *notas = fopen("notas.txt", "r");
        while(feof(notas)) {
            int mat;
            float nota1, nota2;
            fscanf(notas, "%d %f %f\n", &mat, &nota1, &nota2);
            if(mat == matricula) {
                media = (nota1+nota2)/2;
                break;
            }
        }
        if(media == -1) {
            continue;
        }
        fprintf(medias, "%s %s %.2f\n", nome, sobrenome, media);
    }
    fclose(medias);
}