#include <stdio.h>

#define LINHAS 3
#define COLUNAS 6
int i,j;
void imprimirMatriz(float matriz[LINHAS][COLUNAS]) {
    for ( i = 0; i < LINHAS; i++) {
    for ( j = 0; j < COLUNAS; j++) {
    printf("%.2f\t", matriz[i][j]);
}
    printf("\n");
}
}
int main() {
    float matriz[LINHAS][COLUNAS];
    float somaColunasImpares = 0;
    float mediaColunas24 = 0;

    printf("Digite os elementos da matriz 3x6:\n");
    for ( i = 0; i < LINHAS; i++) {
    for ( j = 0; j < COLUNAS; j++) {
    printf("Elemento [%d][%d]: ", i + 1, j + 1);
    scanf("%f", &matriz[i][j]);
}
}
    for ( j = 0; j < COLUNAS; j += 2) {
    for ( i = 0; i < LINHAS; i++) {
    somaColunasImpares += matriz[i][j];
}
}
    printf("\nSoma dos elementos das colunas ímpares: %.2f\n", somaColunasImpares);

    for ( i = 0; i < LINHAS; i++) {
    mediaColunas24 += matriz[i][1] + matriz[i][3];
}
    mediaColunas24 /= (2 * LINHAS);
    printf("Média aritmética dos elementos das colunas 2 e 4: %.2f\n", mediaColunas24);

    for ( i = 0; i < LINHAS; i++) {
    matriz[i][5] = matriz[i][0] + matriz[i][1];
}
    printf("\nMatriz modificada:\n");
    imprimirMatriz(matriz);

    return 0;
}
