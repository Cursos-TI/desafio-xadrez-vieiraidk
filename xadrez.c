#include <stdio.h>

/* Simulação simples de movimentos de xadrez, versão final:
   - Torre  -> recursivo, 5 casas para a direita
   - Bispo  -> recursivo + loops aninhados, 5 casas diagonal (Cima e Direita)
   - Rainha -> recursivo, 8 casas para a esquerda
   - Cavalo -> loops complexos aninhados, movimento em "L": 2 Cima, 1 Direita
*/

/* --- Funções recursivas (simples e diretas) --- */

/* Torre: imprime "Direita" uma vez por chamada, até zerar */
void torre_rec(int restantes) {
    if (restantes <= 0) return;
    printf("Direita\n");
    torre_rec(restantes - 1);
}

/* Bispo: usa recursão, e dentro de cada passo usa loops aninhados
*/
void bispo_rec(int restantes) {
    if (restantes <= 0) return;

    /* Loop externo (vertical) e interno (horizontal) — ficam simples e claros */
    for (int v = 0; v < 1; v++) {            /* parte vertical do passo diagonal */
        printf("Cima\n");
        for (int h = 0; h < 1; h++) {        /* parte horizontal do passo diagonal */
            printf("Direita\n");
        }
    }

    bispo_rec(restantes - 1);
}

/* Rainha: imprime "Esquerda" recursivamente */
void rainha_rec(int restantes) {
    if (restantes <= 0) return;
    printf("Esquerda\n");
    rainha_rec(restantes - 1);
}

int main(void) {
    /* Distâncias definidas no código */
    int torre_casas  = 5;  /* Torre: 5 para a direita */
    int bispo_casas  = 5;  /* Bispo: 5 passos diagonais (cada passo = Cima + Direita) */
    int rainha_casas = 8;  /* Rainha: 8 para a esquerda */

    /* Torre (recursivo) */
    printf("Movimento da Torre (5 casas para a direita):\n");
    torre_rec(torre_casas);

    /* Bispo (recursivo + loops aninhados) */
    printf("\nMovimento do Bispo (5 casas na diagonal Cima e Direita):\n");
    bispo_rec(bispo_casas);

    /* Rainha (recursivo) */
    printf("\nMovimento da Rainha (8 casas para a esquerda):\n");
    rainha_rec(rainha_casas);

    /* Cavalo: agora com loops aninhados mais complexos.
    */
    int cavalo_duas_cima   = 2; /* duas casas para cima */
    int cavalo_uma_direita = 1; /* uma casa para a direita */
    int num_movimentos_L   = 1; /* quantos "L" o cavalo fará (aqui 1) */

    printf("\nMovimento do Cavalo (2 Cima, 1 Direita) — movimentos em 'L':\n");

    for (int mov = 0; mov < num_movimentos_L; mov++) {
        /* loop para as duas casas para cima:
        */
        int up_done = 0;
        for (int i = 0; i < 20; i++) {
            /* se já fizemos as subidas necessárias, paramos */
            if (up_done >= cavalo_duas_cima) {
                break;
            }

            /* condição simples para demonstrar controle de fluxo: só imprimimos "Cima"
               quando i for par; caso contrário, pulamos para a próxima iteração. */
            if ((i % 2) != 0) {
                i++;            /* avança o índice um pouco (controle extra) */
                continue;       /* pula a iteração sem imprimir */
            }

            /* imprime a subida */
            printf("Cima\n");
            up_done++;
        }

        /* após as duas subidas, fazemos a parte horizontal (1 para a direita) */
        for (int j = 0; j < cavalo_uma_direita; j++) {
            printf("Direita\n");
        }
    }

    return 0;
}
