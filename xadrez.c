#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.
#define MAX_CASAS 8
int main() {

        // Movimentação do Bispo
        printf("Movimentação do Bispo:\n");
        int casas_bispo = 0;
    
        // Loop while para movimentação na diagonal superior direita
        while (casas_bispo <=5) {
            printf("5 casas na diagonal superior direita\n");
            casas_bispo++;
        }
    
        // Movimentação da Torre
        printf("\nMovimentação da Torre:\n");
        int casas_torre = 0;
    
        // Loop for para movimentação para a direita
        for (int i = 0; i < 5; i++) {
            printf("5 casas para a direita\n");
            casas_torre++;
        }
    
        // Movimentação da Rainha
        printf("\nMovimentação da Rainha:\n");
        int casas_rainha = 0;
    
        // Loop do-while para movimentação para a esquerda
        do {
            printf("8 casas para a esquerda\n");
            casas_rainha++;
        } while (casas_rainha < 8);
    
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
