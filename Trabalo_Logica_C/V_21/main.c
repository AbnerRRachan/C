#include <stdio.h>

int main() {
int i, j;
int tamanho = 10;
int vetorA[tamanho];
int vetorB[tamanho];
int vetorC[tamanho];
    
    printf("Digite 10 números inteiros para o vetor A:\n");
    for ( i = 0; i < tamanho; ++i) {
    scanf("%d", &vetorA[i]);
}
    printf("Digite 10 números inteiros para o vetor B:\n");
    for ( i = 0; i < tamanho; ++i) {
    scanf("%d", &vetorB[i]);
}
    for (i = 0; i < tamanho; ++i) {
    vetorC[i] = vetorA[i] - vetorB[i];
}
    printf("\nVetor C (A - B):\n");
    for ( i = 0; i < tamanho; ++i) {
    printf("%d ", vetorC[i]);
}
    printf("\n");

    return 0;
}
