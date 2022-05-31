#include<stdio.h>
#include<stdlib.h>

int main() {
    FILE *alunos = fopen("alunos.txt", "r");
    FILE *medias = fopen("medias.txt", "w");

    while(!feof(alunos)) {
        char nome[50], sobrenome[50];
        int matricula;
        float media=-1;
        fscanf(alunos, "%s %s %d\n", nome, sobrenome, &matricula);

        FILE *notas = fopen("notas.txt", "r");
        while(!feof(notas)) {
            int mat;
            float n[4], total=0;
            fscanf(notas, "%d %f %f %f %f\n", &mat, &n[0], &n[1], &n[2], &n[3]);
            if(mat == matricula) {
                for(int i=0; i<4; total+=n[i++]);
                fprintf(medias, "%s %s %.2f\n", nome, sobrenome, total/4);
                break;
            }
        }
    }
    fclose(medias);
}