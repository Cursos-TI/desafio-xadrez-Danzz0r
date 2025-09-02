#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
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



    
    // Movimento da Torre (usando for)
    printf("--- Movimento da Torre: 5 casas para a direita ---\n");
    int casasTorre = 5;
    
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }

    printf("\n"); // Adiciona uma linha em branco para separar os movimentos

    // Movimento do Bispo (usando while)
    printf("--- Movimento do Bispo: 5 casas na diagonal (Cima e Direita) ---\n");
    int casasBispo = 5;
    int contadorBispo = 1;
    
    while (contadorBispo <= casasBispo) {
        printf("Cima, Direita\n");
        contadorBispo++;
    }

    printf("\n"); // Adiciona uma linha em branco

    // Movimento da Rainha (usando do-while)
    printf("--- Movimento da Rainha: 8 casas para a esquerda ---\n");
    int casasRainha = 8;
    int contadorRainha = 1;
    
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha <= casasRainha);

    return 0;
}
