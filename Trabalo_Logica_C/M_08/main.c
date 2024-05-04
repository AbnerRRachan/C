#include <stdio.h>
#include <stdlib.h>

int main() {
    const int linhas = 10;
    const int colunas = 10;
	int i, j;
    int matriz[linhas][colunas];

    for (i = 0; i < linhas; ++i) {
    for (j = 0; j < colunas; ++j) {
    if (i < j) {
    matriz[i][j] = 2 * i + 7 * j - 2;
} else if (i == j) {
     matriz[i][j] = 3 * i * i - 1;
} else {
    matriz[i][j] = 4 * i * i * i - 5 * j * j + 1;
}
}
}
    printf("Matriz gerada:\n");
    for (i = 0; i < linhas; ++i) {
    for (j = 0; j < colunas; ++j) {
    printf("%6d ", matriz[i][j]);
}
    printf("\n");
}
    return 0;
}

