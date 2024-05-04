#include <stdio.h>

int main() {
int i;
int tamanho = 100;
int vetor[tamanho];
int numeroAtual = 1;

    for ( i = 0; i < tamanho; ++i) {
    while (numeroAtual % 7 == 0 || numeroAtual % 10 == 7) {
    numeroAtual++;
}
    vetor[i] = numeroAtual;

    numeroAtual++;
}
    printf("Vetor com os 100 primeiros naturais que não são múltiplos de 7 ou não terminam com 7:\n");
    for ( i = 0; i < tamanho; ++i) {
    printf("%d ", vetor[i]);
}
    printf("\n");

    return 0;
}
