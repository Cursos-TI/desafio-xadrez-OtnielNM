#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MOVIMENTOS_BISPO 5
#define MOVIMENTOS_TORRE 5
#define MOVIMENTOS_RAINHA 8

int main() {
    int i;

    // Movimentação do Bispo
    printf("Movimentação do Bispo (Diagonal Superior Direita):\n");
    for(i = 1; i <= MOVIMENTOS_BISPO; i++) {
        printf("Movendo o Bispo para a casa %d na diagonal superior direita\n", i);
    }

    // Movimentação da Torre
    printf("\nMovimentação da Torre (Para a Direita):\n");
    for(i = 1; i <= MOVIMENTOS_TORRE; i++) {
        printf("Movendo a Torre para a casa %d para a direita\n", i);
    }

    // Movimentação da Rainha
    printf("\nMovimentação da Rainha (Para a Esquerda):\n");
    for(i = 1; i <= MOVIMENTOS_RAINHA; i++) {
        printf("Movendo a Rainha para a casa %d para a esquerda\n", i);
    }

    return 0;
}