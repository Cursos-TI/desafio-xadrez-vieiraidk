#include <stdio.h>

/* Simulação simples de movimentos de xadrez:
   Torre  -> 5 casas para a direita (usando for)
   Bispo  -> 5 casas na diagonal Cima, Direita (usando while)
   Rainha -> 8 casas para a esquerda (usando do-while)
*/

int main(void) {
    /* Distâncias definidas no código */
    int torre_casas  = 5;
    int bispo_casas  = 5;
    int rainha_casas = 8;

    /* Torre: 5 casas para a direita */
    printf("Movimento da Torre (5 casas para a direita):\n");
    for (int i = 0; i < torre_casas; i++) {
        printf("Direita\n");
    }

    /* Bispo: 5 casas na diagonal (Cima, Direita) */
    printf("\nMovimento do Bispo (5 casas na diagonal Cima, Direita):\n");
    int cont_bispo = 0;
    while (cont_bispo < bispo_casas) {
        printf("Cima, Direita\n");
        cont_bispo++;
    }

    /* Rainha: 8 casas para a esquerda */
    printf("\nMovimento da Rainha (8 casas para a esquerda):\n");
    int cont_rainha = 0;
    if (rainha_casas > 0) {
        do {
            printf("Esquerda\n");
            cont_rainha++;
        } while (cont_rainha < rainha_casas);
    }

    return 0;
}
