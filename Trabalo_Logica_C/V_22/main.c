#include <stdio.h>

int main() {
	int i, j;
int tamanho = 10;
int vetorA[tamanho];
int vetorB[tamanho];
int vetorC[tamanho * 2];

    printf("Digite 10 números inteiros para o vetor A:\n");
    for (i = 0; i < tamanho; ++i) {
    scanf("%d", &vetorA[i]);
}
    printf("Digite 10 números inteiros para o vetor B:\n");
    for (i = 0; i < tamanho; ++i) {
    scanf("%d", &vetorB[i]);
}
    for (i = 0; i < tamanho; ++i) {
    vetorC[2 * i] = vetorA[i];  
    vetorC[2 * i + 1] = vetorB[i];
}
    printf("\nVetor C (Posições pares de A e ímpares de B):\n");
    for (i = 0; i < tamanho * 2; ++i) {
    printf("%d ", vetorC[i]);
}
    printf("\n");

    return 0;
}
