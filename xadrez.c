#include <stdio.h>

// Este código implementa a movimentação das peças utilizando estruturas de repetição e loops aninhados.

#define MAX_CASAS 8

int main() {
    // Movimentação do Bispo
    printf("Movimentação do Bispo:\n");
    int casas_bispo = 0;
    while (casas_bispo < 5) {
        printf("Diagonal Superior Direita\n");
        casas_bispo++;
    }
    
    // Movimentação da Torre
    printf("\nMovimentação da Torre:\n");
    for (int i = 0; i < 5; i++) {
        printf("Direita\n");
    }
    
    // Movimentação da Rainha
    printf("\nMovimentação da Rainha:\n");
    int casas_rainha = 0;
    do {
        printf("Esquerda\n");
        casas_rainha++;
    } while (casas_rainha < 8);
    
    // Movimentação do Cavalo
    printf("## Movimentação do Cavalo:\n ##");
    for (int i = 0; i < 2; i++) { // Movimento vertical (duas casas para baixo)
        printf("Baixo\n");
    }
    
    int j = 0;
    while (j < 1) { // Movimento horizontal (uma casa para a esquerda)
        printf("Esquerda\n");
        j++;
    }
    
    return 0;
}
