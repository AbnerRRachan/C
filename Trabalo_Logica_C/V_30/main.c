#include <stdio.h>

int main() {
    int tamanho = 10;
    int vetor1[tamanho], vetor2[tamanho];
	int i, j, k;
    printf("Digite os elementos do primeiro vetor:\n");
    for ( i = 0; i < tamanho; ++i) {
    scanf("%d", &vetor1[i]);
}
    printf("Digite os elementos do segundo vetor:\n");
    for ( i = 0; i < tamanho; ++i) {
    scanf("%d", &vetor2[i]);
}

    int vetorIntersecao[tamanho];
    int contIntersecao = 0;

    for (i = 0; i < tamanho; ++i) {
    for ( j = 0; j < tamanho; ++j) {
    if (vetor1[i] == vetor2[j]) {
        
    int repetido = 0;
    for ( k = 0; k < contIntersecao; ++k) {
    if (vetor1[i] == vetorIntersecao[k]) {
    repetido = 1;
    break;
}
}
if (!repetido) {
    vetorIntersecao[contIntersecao] = vetor1[i];
    contIntersecao++;
}
}
}
}
    printf("\nVetor de interseção:\n");
    for ( i = 0; i < contIntersecao; ++i) {
    printf("%d ", vetorIntersecao[i]);
}
    printf("\n");

    return 0;
}
