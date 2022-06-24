#include<stdio.h>

void main() {
    // Variáveis
    int lucro_10=0, lucro_10_20=0, lucro_20=0;
    float compra=0, venda=0, compra_total=0, venda_total=0;

    while(1) {
        scanf("%f %f", &compra, &venda);
        if(compra == 0) {
            break;
        }

        compra_total += compra;
        venda_total += venda;

        if(venda/compra < 0.10) {
            lucro_10++;
        } else if(venda/compra > 0.20) {
            lucro_20++;
        } else {
            lucro_10_20++;
        }
    
    }
    // Saídas
    printf("Lucro < 0.10: %d\n", lucro_10);
    printf("0.10 <= Lucro <= 0.20: %d\n", lucro_10_20);
    printf("Lucro > 0.20: %d\n", lucro_20);

    printf("Total de compra: %.2f\n", compra_total);
    printf("Total de venda: %.2f\n", venda_total);
    printf("Lucro total: %.2f\n", venda_total-compra_total);
}