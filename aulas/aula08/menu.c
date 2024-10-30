#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMANHO_TABULEIRO 3

typedef struct {
    char tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO];
    char jogador1;
    char jogador2;
} Jogo;

int main() {
    Jogo jogo;
    int opcao;
    int linha, coluna;
    char vencedor = ' ';
    int jogadas = 0;

    // Inicializa o tabuleiro com espaços vazios
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            jogo.tabuleiro[i][j] = ' ';
        }
    }

    // Definindo os jogadores
    jogo.jogador1 = 'X';
    jogo.jogador2 = 'O';

    while (1) {
        // Menu principal
        printf("Menu Principal\n");
        printf("1 - Jogar\n");
        printf("2 - Sair\n");
        printf("Digite a opcao desejada: ");
        scanf("%d", &opcao);

        // Limpa o buffer do teclado
        while (getchar() != '\n');

        switch (opcao) {
            case 1:
                while (vencedor == ' ' && jogadas < TAMANHO_TABULEIRO * TAMANHO_TABULEIRO) {
                    // Exibe o tabuleiro
                    printf("  0 1 2\n");
                    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
                        printf("%d ", i);
                        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
                            printf("%c ", jogo.tabuleiro[i][j]);
                        }
                        printf("\n");
                    }

                    // Solicita a jogada
                    printf("Jogador %c, digite a linha e a coluna: ", jogadas % 2 == 0 ? jogo.jogador1 : jogo.jogador2);
                    scanf("%d %d", &linha, &coluna);

                    // Valida a jogada
                    while (linha < 0 || linha >= TAMANHO_TABULEIRO || coluna < 0 || coluna >= TAMANHO_TABULEIRO || jogo.tabuleiro[linha][coluna] != ' ') {
                        printf("Jogada invalida. Tente novamente!\n");
                        scanf("%d %d", &linha, &coluna);
                    }

                    // Realiza a jogada
                    jogo.tabuleiro[linha][coluna] = jogadas % 2 == 0 ? jogo.jogador1 : jogo.jogador2;
                    jogadas++;

                    // Verifica se há um vencedor
                    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
                        // Linhas
                        if (jogo.tabuleiro[i][0] == jogo.tabuleiro[i][1] && jogo.tabuleiro[i][1] == jogo.tabuleiro[i][2] && jogo.tabuleiro[i][0] != ' ') {
                            vencedor = jogo.tabuleiro[i][0];
                        }
                        // Colunas
                        if (jogo.tabuleiro[0][i] == jogo.tabuleiro[1][i] && jogo.tabuleiro[1][i] == jogo.tabuleiro[2][i] && jogo.tabuleiro[0][i] != ' ') {
                            vencedor = jogo.tabuleiro[0][i];
                        }
                    }
                    // Diagonais
                    if (jogo.tabuleiro[0][0] == jogo.tabuleiro[1][1] && jogo.tabuleiro[1][1] == jogo.tabuleiro[2][2] && jogo.tabuleiro[0][0] != ' ') {
                        vencedor = jogo.tabuleiro[0][0];
                    }
                    if (jogo.tabuleiro[0][2] == jogo.tabuleiro[1][1] && jogo.tabuleiro[1][1] == jogo.tabuleiro[2][0] && jogo.tabuleiro[0][2] != ' ') {
                        vencedor = jogo.tabuleiro[0][2];
                    }
                }

                // Exibe o resultado do jogo
                if (vencedor != ' ') {
                    printf("Jogador %c venceu!\n", vencedor);
                } else {
                    printf("Empate!\n");
                }
                break;

            case 2:
                return 0;

            default:
                printf("Opcao invalida.\n");
                break;
        }
    }

    return 0;
}
