#include <stdio.h>

void trocar(float *a, float *b) {
    float temp = *a;
    *a = *b;
    *b = temp;
}
int i, j;
void ordenarVetor(float vetor[], int tamanho) {
    for ( i = 0; i < tamanho - 1; ++i) {
    for ( j = 0; j < tamanho - 1 - i; ++j) {
    if (vetor[j] > vetor[j + 1]) {
    trocar(&vetor[j], &vetor[j + 1]);
}
}       
}
}
int main() {
    int tamanho = 10;
	int i;
    float vetor[tamanho];

    printf("Digite 10 números reais:\n");
    for ( i = 0; i < tamanho; ++i) {
    scanf("%f", &vetor[i]);
}
    ordenarVetor(vetor, tamanho);

    printf("\nVetor ordenado:\n");
    for ( i = 0; i < tamanho; ++i) {
    printf("%.2f ", vetor[i]);
}
    printf("\n");

    return 0;
}
