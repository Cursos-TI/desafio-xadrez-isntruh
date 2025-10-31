#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int movimentoBispo = 5;   // número de casas que o bispo vai se mover
    int movimentoTorre = 5;   // número de casas que a torre vai se mover
    int movimentoRainha = 8;  // número de casas que a rainha vai se mover

    int i, j;

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    printf("\n~~~~~ Movimento do Bispo ~~~~~\n");
    i = 1;
    while (i <= movimentoBispo) {
        printf("Cima, Direita (%d)\n", i);
        i++;
    }

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    
    printf("~~~~~ Movimento da Torre ~~~~~\n");
    for (i = 1; i <= movimentoTorre; i++) {
        printf("Direita (%d)\n", i);
    }

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    printf("\n~~~~~ Movimento da Rainha ~~~~~\n");
    i = 0;
    do {
        printf("Esquerda (%d)\n", i);
        i++;
    } while (i <= movimentoRainha);

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    printf("\n~~~~~ Movimento do Cavalo ~~~~~\n");

    int movimentoBaixo = 2;
    int movimentoEsquerda = 1;

    for (i = 1; i <= movimentoBaixo; i++) {
        printf("Baixo (%d)\n", i);

        j = 1;
        while (j <= movimentoEsquerda) {
            printf("Esquerda (%d)\n", j);
            j++;
        }
    }

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.
    // Aqui simularemos a recursão usando loops aninhados dentro do main.

    printf("\n~~~~~ Movimento do Bispo (Simulação de Recursão + Loops) ~~~~~\n");
    int nivel;
    int casasVerticais = 3;
    int casasHorizontais = 3;
    for (nivel = 1; nivel <= casasVerticais; nivel++) {
        for (j = 1; j <= casasHorizontais; j++) {
            printf("Cima, Direita (V:%d, H:%d)\n", nivel, j);
        }
    }

    printf("\n~~~~~ Movimento da Torre (Simulação de Recursão) ~~~~~\n");
    for (i = 1; i <= 5; i++) {
        printf("Direita (%d)\n", i);
    }

    printf("\n~~~~~ Movimento da Rainha (Simulação de Recursão) ~~~~~\n");
    for (i = 1; i <= 8; i++) {
        printf("Esquerda (%d)\n", i);
    }

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    printf("\n~~~~~ Movimento do Cavalo (Loops Complexos) ~~~~~\n");

    int movimentoCima = 2;
    int movimentoDireita = 1;

    for (i = 1, j = 1; i <= movimentoCima || j <= movimentoDireita;) {

        if (i <= movimentoCima) {
            printf("Cima (%d)\n", i);
            i++;
        }

        if (i > movimentoCima && j <= movimentoDireita) {
            printf("Direita (%d)\n", j);
            j++;
            break;
        }

        if (i == 2 && j == 1) {
            continue;
        }

        if (j <= movimentoDireita && i > movimentoCima) {
            printf("Direita (%d)\n", j);
            j++;
        }

        if (i > movimentoCima && j > movimentoDireita) {
            break;
        }
    }

    printf("\n~~~~~ Fim da Simulação ~~~~~\n");

    return 0;
}
