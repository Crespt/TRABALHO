
#include <stdio.h>

// Função recursiva para movimento da Torre
void mover_torre(int casas) {
    if (casas <= 0) return;
    printf("Direita\n");
    mover_torre(casas - 1);
}

// Função recursiva para movimento da Rainha
void mover_rainha(int casas) {
    if (casas <= 0) return;
    printf("Esquerda\n");
    mover_rainha(casas - 1);
}

// Função recursiva para movimento do Bispo com loop aninhado interno
void mover_bispo(int verticais, int horizontais) {
    if (verticais <= 0 || horizontais <= 0) return;

    for (int i = 0; i < 1; i++) {
        for (int j = 0; j < 1; j++) {
            printf("Cima Direita\n");
        }
    }

    mover_bispo(verticais - 1, horizontais - 1);
}

int main() {
    // Torre: 5 casas para direita
    printf("Movimento da Torre:\n");
    mover_torre(5);

    // Bispo: 5 casas na diagonal (cima + direita)
    printf("\nMovimento do Bispo:\n");
    mover_bispo(5, 5);

    // Rainha: 8 casas para a esquerda
    printf("\nMovimento da Rainha:\n");
    mover_rainha(8);

    // Cavalo: movimento em L (2 para cima, 1 para a direita)
    printf("\nMovimento do Cavalo:\n");
    int subidas = 0, direcao = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            if (subidas < 2) {
                printf("Cima\n");
                subidas++;
                continue;
            }
            if (direcao < 1) {
                printf("Direita\n");
                direcao++;
                break;
            }
        }
    }

    return 0;
}
