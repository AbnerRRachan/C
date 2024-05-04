#include <stdio.h>
#include <stdlib.h>

int main() {
    const int ordem = 3;
	int i, j;
    int matriz[ordem][ordem];

    printf("Digite os elementos da matriz %dx%d:\n", ordem, ordem);
    for (i = 0; i < ordem; ++i) {
    for (j = 0; j < ordem; ++j) {
    scanf("%d", &matriz[i][j]);
}
}
    int somaAbaixoDiagonal = 0;
    for (i = 0; i < ordem; ++i) {
    for (j = 0; j < i; ++j) {
    somaAbaixoDiagonal += matriz[i][j];
}
}
    printf("\nMatriz informada:\n");
    for (i = 0; i < ordem; ++i) {
    for (j = 0; j < ordem; ++j) {
    printf("%4d ", matriz[i][j]);
}
    printf("\n");
}
    printf("\nA soma dos elementos abaixo da diagonal principal e: %d\n", somaAbaixoDiagonal);

    return 0;
}
