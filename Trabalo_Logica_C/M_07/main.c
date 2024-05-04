#include <stdio.h>
#include <stdlib.h>

int main() {
    const int linhas = 4;
    const int colunas = 4;
	int i, j;
    int matriz1[linhas][colunas];
    int matriz2[linhas][colunas];
    int matrizResultante[linhas][colunas];

    printf("Digite os elementos da primeira matriz 4x4:\n");
    for ( i = 0; i < linhas; ++i) {
    for ( j = 0; j < colunas; ++j) {
    scanf("%d", &matriz1[i][j]);
}
}
    printf("Digite os elementos da segunda matriz 4x4:\n");
    for ( i = 0; i < linhas; ++i) {
    for ( j = 0; j < colunas; ++j) {
    scanf("%d", &matriz2[i][j]);
}
}
    for ( i = 0; i < linhas; ++i) {
    for ( j = 0; j < colunas; ++j) {
    if (matriz1[i][j] > matriz2[i][j]) {
    matrizResultante[i][j] = matriz1[i][j];
} else {
    matrizResultante[i][j] = matriz2[i][j];
}
}
}

    printf("\nMatriz resultante com os maiores valores:\n");
    for ( i = 0; i < linhas; ++i) {
    for ( j = 0; j < colunas; ++j) {
    printf("%4d ", matrizResultante[i][j]);
}
    printf("\n");
}
    return 0;
}
