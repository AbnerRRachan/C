#include <stdio.h>

int main() {
int i,j;
int tamanho = 10;
int vetor[tamanho];

    for ( i = 0; i < tamanho; ++i) {
    int numero;

    printf("Digite um n�mero: ");
    scanf("%d", &numero);

    int duplicado = 0;
    for ( j = 0; j < i; ++j) {
    if (numero == vetor[j]) {
    duplicado = 1;
    printf("N�mero j� digitado. Digite outro n�mero.\n");
    i--;
}
}
    if (!duplicado) {
    vetor[i] = numero;
}
}
    printf("\nVetor final:\n");
    for ( i = 0; i < tamanho; ++i) {
    printf("%d ", vetor[i]);
}
    printf("\n");

    return 0;
}

