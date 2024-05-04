#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LINHAS 5
#define COLUNAS 5
#define MAX_NUMEROS 100

int i, j;
void inicializarCartela(int cartela[LINHAS][COLUNAS]) {
    for (i = 0; i < LINHAS; ++i) {
    	for (j = 0; j < COLUNAS; ++j) {
    		cartela[i][j] = -1; // Inicializa com um valor inválido
}
}
}

void gerarCartela(int cartela[LINHAS][COLUNAS]) {
    for (i = 0; i < LINHAS; ++i) {
    	for ( j = 0; j < COLUNAS; ++j) {
    int numero;
    do {
    numero = rand() % MAX_NUMEROS; // Gera um número aleatório entre 0 e 99
    } while (jaExisteNaCartela(cartela, numero));
    cartela[i][j] = numero;
}
}
}
int jaExisteNaCartela(int cartela[LINHAS][COLUNAS], int numero) {
    for (i = 0; i < LINHAS; ++i) {
    for ( j = 0; j < COLUNAS; ++j) {
    if (cartela[i][j] == numero) {
    return 1; // Retorna 1 se o número já existe na cartela
}
}
}
return 0; // Retorna 0 se o número não existe na cartela
}
void imprimirCartela( int cartela[LINHAS][COLUNAS]) {
    printf("Cartela de Bingo:\n");
    for ( i = 0; i < LINHAS; ++i) {
    for ( j = 0; j < COLUNAS; ++j) {
    printf("%2d ", cartela[i][j]);}
    printf("\n");
}
}

int main() {
    srand(time(NULL));

    int cartela[LINHAS][COLUNAS];
    inicializarCartela(cartela);

    gerarCartela(cartela);

    imprimirCartela(cartela);

    return 0;
}
