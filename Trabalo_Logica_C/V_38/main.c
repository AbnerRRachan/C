#include <stdio.h>

void inserirOrdenado(int vetor[], int *tamanho, int valor) {
    int i = *tamanho - 1;

    while (i >= 0 && vetor[i] > valor) {
    vetor[i + 1] = vetor[i];
    i--;
}
    vetor[i + 1] = valor;
    (*tamanho)++;
}
int main() {
    int tamanho = 0;
    int vetor[10];
    int i;
    for (i = 0; i < 10; ++i) {
    int valor;
    printf("Digite um valor: ");
    scanf("%d", &valor);

    inserirOrdenado(vetor, &tamanho, valor);
}
    printf("\nValores em ordem crescente:\n");
    for ( i = 0; i < tamanho; ++i) {
    printf("%d ", vetor[i]);
}
    printf("\n");

    return 0;
}
