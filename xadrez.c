#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

// Funções recursivas para as peças Torre, Bispo e Rainha
void moverTorre(int casas, int atual) {
    if (atual > casas) return;
    printf("Direita (%d)\n", atual);
    moverTorre(casas, atual + 1);
}

void moverBispo(int casasVerticais, int casasHorizontais, int nivel) {
    if (nivel > casasVerticais) return;

    // Loop interno para o movimento horizontal em cada nível vertical
    for (int j = 1; j <= casasHorizontais; j++) {
        printf("Cima, Direita (V:%d, H:%d)\n", nivel, j);
    }

    // Chamada recursiva para o próximo nível vertical
    moverBispo(casasVerticais, casasHorizontais, nivel + 1);
}

void moverRainha(int casas, int atual) {
    if (atual > casas) return; // caso base
    printf("Esquerda (%d)\n", atual);
    moverRainha(casas, atual + 1); // chamada recursiva
}

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int movimentoBispo = 5;   // número de casas que o bispo vai se mover
    int movimentoTorre = 5;   // número de casas que a torre vai se mover
    int movimentoRainha = 8;  // número de casas que a rainha vai se mover

    int i; // variável de controle principal

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    printf("\n~~~~~ Movimento do Bispo ~~~~~\n");
    // Bispo se move 5 casas na diagonal para cima e à direita
    i = 1;
    while (i <= movimentoBispo) {
        printf("Cima, Direita (%d)\n", i);
        i++;
    }

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    
    printf("~~~~~ Movimento da Torre ~~~~~\n");
    // Torre se move 5 casas para a direita
    for (i = 1; i <= movimentoTorre; i++) {
        printf("Direita (%d)\n", i);
    }

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    printf("\n~~~~~ Movimento da Rainha ~~~~~\n");
    // Rainha se move 8 casas para a esquerda
    i = 0;
    do {
        printf("Esquerda (%d)\n", i);
        i++;
    } while (i <= movimentoRainha);

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    printf("\n~~~~~ Movimento do Cavalo ~~~~~\n");

    int movimentoBaixo = 2;     // número de casas que o cavalo se move para baixo
    int movimentoEsquerda = 1;  // número de casas que o cavalo se move para a esquerda

    // O primeiro loop (for) controla o movimento para baixo (2 casas)
    for (i = 1; i <= movimentoBaixo; i++) {
        printf("Baixo (%d)\n", i);

        // Loop interno (while) controla o movimento lateral (1 casa para a esquerda)
        int j = 1;
        while (j <= movimentoEsquerda) {
            printf("Esquerda (%d)\n", j);
            j++;
        }
    }

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Testes das funções recursivas
    printf("\n~~~~~ Movimento do Bispo (Recursão + Loops) ~~~~~\n");
    moverBispo(3, 3, 1);

    printf("\n~~~~~ Movimento da Torre (Recursão) ~~~~~\n");
    moverTorre(5, 1);

    printf("\n~~~~~ Movimento da Rainha (Recursão) ~~~~~\n");
    moverRainha(8, 1);

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    printf("\n~~~~~ Movimento do Cavalo (Loops Complexos) ~~~~~\n");

    // O Cavalo se move em "L" → duas casas para cima e uma para a direita
    int movimentoCima = 2;
    int movimentoDireita = 1;

    // Loop com múltiplas variáveis e condições compostas
    for (int i = 1, j = 1; i <= movimentoCima || j <= movimentoDireita; i++, j++) {

        // Se o cavalo já moveu 2 casas para cima mas ainda não 1 para a direita, apenas direita
        if (i > movimentoCima && j <= movimentoDireita) {
            printf("Direita (%d)\n", j);
            break; // encerra o movimento após completar o "L"
        }

        // Se ainda está subindo, imprime o movimento vertical
        if (i <= movimentoCima) {
            printf("Cima (%d)\n", i);
        }

        // Se for a segunda casa e j ainda não começou, pula a iteração
        if (i == 2 && j == 1) {
            continue; // simula o ponto de dobra do "L"
        }

        // Movimento lateral após a subida
        if (j <= movimentoDireita) {
            printf("Direita (%d)\n", j);
        }

        // Se ambos os movimentos já ocorreram, interrompe o loop
        if (i >= movimentoCima && j >= movimentoDireita) {
            break;
        }
    }

    printf("\n~~~~~ Fim da Simulação ~~~~~\n");

    return 0;
}