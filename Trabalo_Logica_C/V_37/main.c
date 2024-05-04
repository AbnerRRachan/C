#include <stdio.h>

void trocar(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
int i, j;
void ordenarCrescente(int vetor[], int inicio, int meio) {
    for ( i = inicio; i <= meio; ++i) {
    for ( j = i + 1; j <= meio; ++j) {
    if (vetor[i] > vetor[j]) {
    trocar(&vetor[i], &vetor[j]);
}
}
}
}
void ordenarDecrescente(int vetor[], int meio, int fim) {
    for ( i = meio + 1; i <= fim; ++i) {
        for ( j = i + 1; j <= fim; ++j) {
            if (vetor[i] < vetor[j]) {
    trocar(&vetor[i], &vetor[j]);
}
}
}
}
void ordenarVetorMisto(int vetor[], int tamanho) {

    int meio = (tamanho - 1) / 2;
    
    ordenarCrescente(vetor, 0, meio);
    ordenarDecrescente(vetor, meio + 1, tamanho - 1);
}
int main() {
int tamanho = 11;
int vetor[] = {1, 2, 3, 4, 5, 6, 11, 10, 9, 8, 7};

    ordenarVetorMisto(vetor, tamanho);

    printf("Vetor ordenado:\n");
    for ( i = 0; i < tamanho; ++i) {
    printf("%d ", vetor[i]);
}
    printf("\n");

    return 0;
}
