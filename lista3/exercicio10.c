#include<stdio.h>

void main() {
    // Variáveis
    int voto=0, a=0, b=0, c=0, d=0, nulo=0, branco=0;

    while(1) {
        scanf("%d", &voto);

        if(voto == 0) {
            break;
        }

        switch(voto) {
            case 1:
                a++;
                break;
            case 2:
                b++;
                break;
            case 3:
                c++;
                break;
            case 4:
                d++;
                break;
            case 5:
                nulo++;
                break;
            case 6:
                branco++;
                break;
        }
    }

    // Saídas
    printf("Candidato A: %d\n", a);
    printf("Candidato B: %d\n", b);
    printf("Candidato C: %d\n", c);
    printf("Candidato D: %d\n", d);
    
    printf("Votos nulos: %d\n", nulo);
    printf("Votos em branco: %d\n", branco);
}