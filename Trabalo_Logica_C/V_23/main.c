#include <stdio.h>

int main() {
int tamanho = 5;
int i, j;

    double vetorX[tamanho];
    double vetorY[tamanho];

    printf("Digite 5 números reais para o vetor X:\n");
    for ( i = 0; i < tamanho; ++i) {
    scanf("%lf", &vetorX[i]);
}
    printf("Digite 5 números reais para o vetor Y:\n");
    for (i = 0; i < tamanho; ++i) {
    scanf("%lf", &vetorY[i]);
}
    double produtoEscalar = 0.0;
    for ( i = 0; i < tamanho; ++i) {
    produtoEscalar += vetorX[i] * vetorY[i];
}
    printf("\nVetor X:\n");
    for ( i = 0; i < tamanho; ++i) {
    printf("%.2f ", vetorX[i]);
    }
    printf("\nVetor Y:\n");
    for ( i = 0; i < tamanho; ++i) {
    printf("%.2f ", vetorY[i]);
}
    printf("\nProduto Escalar: %.2f\n", produtoEscalar);

    return 0;
}
