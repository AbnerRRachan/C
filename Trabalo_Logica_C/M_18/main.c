#include <stdio.h>

#define LINHAS 3
#define COLUNAS 3
int i, j;
void calcularSomaColunas(int matriz[LINHAS][COLUNAS], int resultado[COLUNAS]) {
    for (j = 0; j < COLUNAS; j++) {
    resultado[j] = 0;
    for ( i = 0; i < LINHAS; i++) {
    resultado[j] += matriz[i][j];
}
}
}
void exibirArray(int array[], int tamanho) {
    for ( i = 0; i < tamanho; i++) {
    printf("%d ", array[i]);
}
    printf("\n");
}
int main() {
    int matriz[LINHAS][COLUNAS];
    int resultado[COLUNAS];
	int i, j;
    printf("Digite os elementos da matriz 3x3:\n");
    for ( i = 0; i < LINHAS; i++) {
    for ( j = 0; j < COLUNAS; j++) {
    printf("Elemento [%d][%d]: ", i + 1, j + 1);
    scanf("%d", &matriz[i][j]);
}
}
    calcularSomaColunas(matriz, resultado);

    printf("\nArray resultante (soma das colunas):\n");
    exibirArray(resultado, COLUNAS);

    return 0;
}
