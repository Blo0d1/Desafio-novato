#include <stdio.h>

int main() {
    int tamanho = 10; // Tamanho da matriz (10x10)
    char tabuleiro[10][10]; // Matriz do tabuleiro
    int navio = '3'; // numero para representar navio
    int agua = '0';  // numero para representar água

    // Preencher a matriz com água
    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < tamanho; j++) {
            tabuleiro[i][j] = agua;
        }
    }

    // Posicionar navio horizontal de tamanho 3 na linha 2, colunas 1 a 3
    int linha_h = 2;
    int coluna_inicio_h = 1;
    for (int j = coluna_inicio_h; j < coluna_inicio_h + 3; j++) {
        tabuleiro[linha_h][j] = navio;
    }

    // Posicionar navio vertical de tamanho 3 na coluna 6, linhas 5 a 7
    int coluna_v = 6;
    int linha_inicio_v = 5;
    for (int i = linha_inicio_v; i < linha_inicio_v + 3; i++) {
        tabuleiro[i][coluna_v] = navio;
    }

    // Exibir o tabuleiro
    printf("Tabuleiro:\n");
    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < tamanho; j++) {
            printf("%c ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
