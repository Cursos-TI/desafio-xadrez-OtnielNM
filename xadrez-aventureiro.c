#include <stdio.h>

int main() {
    int i, j;

    // Movimentação do Cavalo (movimento em L)
    printf("Movimentação do Cavalo (Para Baixo e para a Esquerda):\n");

    // Loop externo usando 'for' para o primeiro movimento
    for(i = 1; i <= 2; i++) {
        // Loop interno usando 'while' para o movimento em L
        j = 1;
        while(j <= 2) {
            printf("Movendo o Cavalo %d casas para baixo e %d casas para a esquerda\n", i, j);
            j++; // Incrementando a segunda parte do movimento
        }
    }

    return 0;
}