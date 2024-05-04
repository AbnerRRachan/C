#include <stdio.h>


int elementoJaExiste(int elemento, int vetor[], int tamanho) {
	int i;
    for ( i = 0; i < tamanho; ++i) {
    if (vetor[i] == elemento) {
    return 1;
}
}
    return 0;
}

int main() {
int i;
    int tamanho = 10;

    int vetor1[tamanho], vetor2[tamanho];


    printf("Digite os elementos do primeiro vetor:\n");
    for ( i = 0; i < tamanho; ++i) {
    scanf("%d", &vetor1[i]);
}


    printf("Digite os elementos do segundo vetor:\n");
    for ( i = 0; i < tamanho; ++i) {
        scanf("%d", &vetor2[i]);
}
    int vetorUniao[2 * tamanho]; 
    int contUniao = 0;

    for ( i = 0; i < tamanho; ++i) {
    if (!elementoJaExiste(vetor1[i], vetorUniao, contUniao)) {
    vetorUniao[contUniao] = vetor1[i];
    contUniao++;
}
}

    for ( i = 0; i < tamanho; ++i) {
    if (!elementoJaExiste(vetor2[i], vetorUniao, contUniao)) {
    vetorUniao[contUniao] = vetor2[i];
}
}

    printf("\nVetor de união:\n");
    for ( i = 0; i < contUniao; ++i) {
    printf("%d ", vetorUniao[i]);
}
    printf("\n");

    return 0;
}
