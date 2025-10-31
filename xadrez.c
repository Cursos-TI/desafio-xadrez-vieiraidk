#include <stdio.h>

/* Simulação simples de movimentos de xadrez:
   Torre  -> 5 casas para a direita (usando for)
   Bispo  -> 5 casas na diagonal Cima, Direita (usando while)
   Rainha -> 8 casas para a esquerda (usando do-while)
   Cavalo -> 2 casas para baixo e 1 para a esquerda (movimento em "L")
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

    /* 
       Cavalo (movimento em "L"):
       - Deve ir 2 casas para baixo e 1 casa para a esquerda.
    */
    int cavalo_duas_baixo    = 2; /* duas casas para baixo */
    int cavalo_uma_esquerda  = 1; /* uma casa para a esquerda */
    int num_movimentos_L     = 1; /* quantos "L" o cavalo fará (aqui 1) */

    printf("\nMovimento do Cavalo (2 Baixo, 1 Esquerda) — um 'L':\n");
    for (int mov = 0; mov < num_movimentos_L; mov++) {
        /* primeiro faz as duas casas para baixo */
        int cont_baixo = 0;
        while (cont_baixo < cavalo_duas_baixo) {
            printf("Baixo\n");
            cont_baixo++;
        }
        /* depois faz a casa para a esquerda */
        int cont_esq = 0;
        while (cont_esq < cavalo_uma_esquerda) {
            printf("Esquerda\n");
            cont_esq++;
        }
    }

    return 0;
}
