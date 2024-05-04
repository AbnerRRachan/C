#include <stdio.h>

#define LINHAS 2
#define COLUNAS 2
int i,j;
void somarMatrizes(float matriz1[LINHAS][COLUNAS], float matriz2[LINHAS][COLUNAS], float resultado[LINHAS][COLUNAS]) {
    for ( i = 0; i < LINHAS; i++) {
    for ( j = 0; j < COLUNAS; j++) {
    resultado[i][j] = matriz1[i][j] + matriz2[i][j];
}
}
}
void subtrairMatrizes(float matriz1[LINHAS][COLUNAS], float matriz2[LINHAS][COLUNAS], float resultado[LINHAS][COLUNAS]) {
    for ( i = 0; i < LINHAS; i++) {
    for ( j = 0; j < COLUNAS; j++) {
    resultado[i][j] = matriz2[i][j] - matriz1[i][j];
}
}
}
void adicionarConstante(float matriz[LINHAS][COLUNAS], float constante) {
    for ( i = 0; i < LINHAS; i++) {
    for ( j = 0; j < COLUNAS; j++) {
    matriz[i][j] += constante;
}
}
}
void imprimirMatriz(float matriz[LINHAS][COLUNAS]) {
    for ( i = 0; i < LINHAS; i++) {
    for ( j = 0; j < COLUNAS; j++) {
    printf("%.2f\t", matriz[i][j]);
}
    printf("\n");
}
    printf("\n");
}
int main() {
    float matriz1[LINHAS][COLUNAS];
    float matriz2[LINHAS][COLUNAS];
    float resultado[LINHAS][COLUNAS];
    float constante;

    printf("Digite os elementos da primeira matriz 2x2:\n");
    for ( i = 0; i < LINHAS; i++) {
    for ( j = 0; j < COLUNAS; j++) {
    printf("Elemento [%d][%d]: ", i + 1, j + 1);
    scanf("%f", &matriz1[i][j]);
}
}
    printf("Digite os elementos da segunda matriz 2x2:\n");
    for ( i = 0; i < LINHAS; i++) {
    for ( j = 0; j < COLUNAS; j++) {
    printf("Elemento [%d][%d]: ", i + 1, j + 1);
    scanf("%f", &matriz2[i][j]);
}
}
    int opcao;

    do {
    printf("\nMenu de Opções:\n");
    printf("(1) Somar as duas matrizes\n");
    printf("(2) Subtrair a primeira matriz da segunda\n");
    printf("(3) Adicionar uma constante às duas matrizes\n");
    printf("(4) Imprimir as matrizes\n");
    printf("(0) Sair\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    switch (opcao) {
    case 1:
    somarMatrizes(matriz1, matriz2, resultado);
    printf("\nResultado da soma das matrizes:\n");
    imprimirMatriz(resultado);
    break;
    case 2:
    subtrairMatrizes(matriz1, matriz2, resultado);
    printf("\nResultado da subtração da primeira matriz da segunda:\n");
    imprimirMatriz(resultado);
    break;
    case 3:
    printf("Digite a constante a ser adicionada às matrizes: ");
    scanf("%f", &constante);
    adicionarConstante(matriz1, constante);
    adicionarConstante(matriz2, constante);
    printf("\nMatrizes com a constante adicionada:\n");
    printf("Matriz 1:\n");
    imprimirMatriz(matriz1);
    printf("Matriz 2:\n");
    imprimirMatriz(matriz2);
    break;
    case 4:
    printf("\nMatriz 1:\n");
    imprimirMatriz(matriz1);
    printf("Matriz 2:\n");
    imprimirMatriz(matriz2);
    break;
    case 0:
    printf("Saindo do programa.\n");
    break;
    default:
    printf("Opção inválida. Tente novamente.\n");
}
} while (opcao != 0);

    return 0;
}
