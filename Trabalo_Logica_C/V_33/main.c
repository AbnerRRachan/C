#include <stdio.h>

int main() {
int i, j;
int tamanho = 15;
int vetor[tamanho];

    printf("Digite os elementos do vetor (15 posições):\n");
    for ( i = 0; i < tamanho; ++i) {
    scanf("%d", &vetor[i]);
}
   

    for ( i = 0; i < tamanho; ++i) {
    if (vetor[i] != 0) {
    vetor[j] = vetor[i];
    j++;
}
}
    for (; j < tamanho; ++j) {
    vetor[j] = 0;
}

    printf("\nVetor compactado:\n");
    for ( i = 0; i < tamanho; ++i) {
    printf("%d ", vetor[i]);
}
    printf("\n");

    return 0;
}
