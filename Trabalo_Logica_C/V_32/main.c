#include <stdio.h>
int i, j;
void somaVetores(int x[], int y[], int resultado[], int tamanho) {
    for ( i = 0; i < tamanho; ++i) {
        resultado[i] = x[i] + y[i];
}
}
void produtoVetores(int x[], int y[], int resultado[], int tamanho) {
    for ( i = 0; i < tamanho; ++i) {
        resultado[i] = x[i] * y[i];
}
}
void diferencaVetores(int x[], int y[], int resultado[], int tamanho) {
    int contResultado = 0;

    for ( i = 0; i < tamanho; ++i) {
    int encontrado = 0;

    for ( j = 0; j < tamanho; ++j) {
    if (x[i] == y[j]) {
    encontrado = 1;
    break;
}
}
    if (!encontrado) {
    resultado[contResultado] = x[i];
    contResultado++;
}
}
}
void intersecaoVetores(int x[], int y[], int resultado[], int tamanho) {
    int contResultado = 0;

    for ( i = 0; i < tamanho; ++i) {
    for ( j = 0; j < tamanho; ++j) {
    if (x[i] == y[j]) {
    resultado[contResultado] = x[i];
    contResultado++;
    break;
}
}
}
}
void uniaoVetores(int x[], int y[], int resultado[], int tamanho) {
    int contResultado = 0;

    for ( i = 0; i < tamanho; ++i) {
    resultado[contResultado] = x[i];
    contResultado++;
}
    for ( i = 0; i < tamanho; ++i) {
        int encontrado = 0;

    for ( j = 0; j < tamanho; ++j) {
    if (y[i] == x[j]) {
    encontrado = 1;
    break;
}
}
    if (!encontrado) {
    resultado[contResultado] = y[i];
    contResultado++;
}
}
}
void imprimirVetor(int vetor[], int tamanho) {
    for ( i = 0; i < tamanho; ++i) {
    printf("%d ", vetor[i]);
}
    printf("\n");
}
int main() {
    int i;
    int tamanho = 5;

    int x[tamanho], y[tamanho];
    int resultadoSoma[tamanho], resultadoProduto[tamanho], resultadoDiferenca[tamanho * 2], resultadoIntersecao[tamanho], resultadoUniao[tamanho * 2];

    printf("Digite os elementos do vetor x (5 elementos):\n");
    for (i = 0; i < tamanho; ++i) {
    scanf("%d", &x[i]);
}
    printf("Digite os elementos do vetor y (5 elementos):\n");
    for ( i = 0; i < tamanho; ++i) {
    scanf("%d", &y[i]);
}
    somaVetores(x, y, resultadoSoma, tamanho);
    printf("Soma entre x e y: ");
    imprimirVetor(resultadoSoma, tamanho);

    produtoVetores(x, y, resultadoProduto, tamanho);
    printf("Produto entre x e y: ");
    imprimirVetor(resultadoProduto, tamanho);

    diferencaVetores(x, y, resultadoDiferenca, tamanho);
    printf("Diferença entre x e y: ");
    imprimirVetor(resultadoDiferenca, tamanho * 2);

    intersecaoVetores(x, y, resultadoIntersecao, tamanho);
    printf("Interseção entre x e y: ");
    imprimirVetor(resultadoIntersecao, tamanho);

    uniaoVetores(x, y, resultadoUniao, tamanho);
    printf("União entre x e y: ");
    imprimirVetor(resultadoUniao, tamanho * 2);

    return 0;
}
