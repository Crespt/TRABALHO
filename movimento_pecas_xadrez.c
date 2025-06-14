
#include <stdio.h>

int main() {
    // Movimento da TORRE usando FOR
    printf("Movimento da Torre:\n");
    for (int i = 0; i < 5; i++) {
        printf("Direita\n");
    }

    // Movimento do BISPO usando WHILE
    printf("\nMovimento do Bispo:\n");
    int contador_bispo = 0;
    while (contador_bispo < 5) {
        printf("Cima Direita\n");
        contador_bispo++;
    }

    // Movimento da RAINHA usando DO-WHILE
    printf("\nMovimento da Rainha:\n");
    int contador_rainha = 0;
    do {
        printf("Esquerda\n");
        contador_rainha++;
    } while (contador_rainha < 8);

    return 0;
}
