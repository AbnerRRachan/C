#include <stdio.h>

int ehPrimo(int numero) {
    if (numero <= 1) {
    return 0;
}
int i;
    for (i = 2; i * i <= numero; ++i) {
    if (numero % i == 0) {
    return 0;
}
}
    return 1;
}
int main() {
int tamanho = 10;
int vetor[tamanho];
int i;
    printf("Digite 10 números inteiros:\n");
    for ( i = 0; i < tamanho; ++i) {
    scanf("%d", &vetor[i]);
}
    printf("\nElementos primos e suas posições no vetor:\n");
    for ( i = 0; i < tamanho; ++i) {
    if (ehPrimo(vetor[i])) {
    printf("Elemento: %d, Posição: %d\n", vetor[i], i);
}
}
    return 0;
}
