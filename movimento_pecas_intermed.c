
#include <stdio.h>

int main() {
    // Movimento da TORRE - 5 casas para a direita, usando FOR
    printf("Movimento da Torre:\n");
    for (int i = 0; i < 5; i++) {
        printf("Direita\n");
    }

    // Movimento do BISPO - 5 casas na diagonal (cima + direita), usando WHILE
    printf("\nMovimento do Bispo:\n");
    int contador_bispo = 0;
    while (contador_bispo < 5) {
        printf("Cima Direita\n");
        contador_bispo++;
    }

    // Movimento da RAINHA - 8 casas para a esquerda, usando DO-WHILE
    printf("\nMovimento da Rainha:\n");
    int contador_rainha = 0;
    do {
        printf("Esquerda\n");
        contador_rainha++;
    } while (contador_rainha < 8);

    // Movimento do CAVALO - 2 para baixo e 1 para esquerda, usando FOR + WHILE
    printf("\nMovimento do Cavalo:\n");
    int passos_verticais = 2;
    int passos_horizontais = 1;

    for (int i = 0; i < passos_verticais; i++) {
        printf("Baixo\n");
        int inner = 0;
        while (inner < 1 && i == passos_verticais - 1) {
            printf("Esquerda\n");
            inner++;
        }
    }

    return 0;
}
