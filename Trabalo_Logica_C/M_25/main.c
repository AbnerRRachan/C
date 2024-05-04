#include <stdio.h>

#define TAMANHO_TABULEIRO 3
#define MINHA_PECA -1
#define PECA_OPPONENTE 1
#define VAZIO 0
int i, j;
void imprimirTabuleiro(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO]) {
    for ( i = 0; i < TAMANHO_TABULEIRO; i++) {
    for ( j = 0; j < TAMANHO_TABULEIRO; j++) {
    printf("%d ", tabuleiro[i][j]);
    }
    printf("\n");
}
}
int verificarVitoria(int linha, int coluna, int diagonal, int peca) {
    return linha == peca || coluna == peca || diagonal == peca;
}
int verificarVencedor(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO], int peca) {
    for ( i = 0; i < TAMANHO_TABULEIRO; i++) {
    int linha = tabuleiro[i][0];
    int coluna = tabuleiro[0][i];
    int diagonal1 = tabuleiro[0][0];
    int diagonal2 = tabuleiro[TAMANHO_TABULEIRO - 1][0];

    for ( j = 0; j < TAMANHO_TABULEIRO; j++) {
    linha &= tabuleiro[i][j];
    coluna &= tabuleiro[j][i];

    if (i == j) {
    diagonal1 &= tabuleiro[i][j];
}
    if (i + j == TAMANHO_TABULEIRO - 1) {
    diagonal2 &= tabuleiro[i][j];
}
}
    if (verificarVitoria(linha, coluna, diagonal1, peca) || verificarVitoria(linha, coluna, diagonal2, peca)) {
    return 1;
}
}
    return 0;
}
void proximaJogada( tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO]) {
    for ( i = 0; i < TAMANHO_TABULEIRO; i++) {
    for ( j = 0; j < TAMANHO_TABULEIRO; j++) {
    if (tabuleiro[i][j] == VAZIO) {
    tabuleiro[i][j] = MINHA_PECA;

   if (verificarVencedor(tabuleiro, MINHA_PECA)) {
    printf("Próxima jogada: (%d, %d)\n", i, j);
    return;
}
    tabuleiro[i][j] = VAZIO; // Desfazer a jogada
}
}
}
    printf("Não foi possível determinar a próxima jogada.\n");
}
int main() {
    int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO] = {
    {-1, 1, 1},
    {-1, -1, 0},
    {0, 1, 0}
};
    printf("Tabuleiro atual:\n");
    imprimirTabuleiro(tabuleiro);

    proximaJogada(tabuleiro);

    return 0;
}
 
