#include <stdio.h>

int main() {
    
int a, b, i;
    printf("Digite dois números (positivos menores que 10000): ");
    scanf("%d %d", &a, &b);

    if (a < 0 || b < 0 || a >= 10000 || b >= 10000) {
    printf("Os números devem ser positivos e menores que 10000.\n");
    return 1; // Código de erro
}

    int vetorA[4] = {a % 10, (a / 10) % 10, (a / 100) % 10, (a / 1000) % 10};
    int vetorB[4] = {b % 10, (b / 10) % 10, (b / 100) % 10, (b / 1000) % 10};

    int vetorSoma[4] = {0};

    int carry = 0;
    for ( i = 0; i < 4; ++i) {
    int soma = vetorA[i] + vetorB[i] + carry;
    vetorSoma[i] = soma % 10;
    carry = soma / 10;
}
    printf("Vetor para a (%d): ", a);
    for ( i = 0; i < 4; ++i) {
    printf("%d ", vetorA[i]);
}
    printf("\n");

    printf("Vetor para b (%d): ", b);
    for ( i = 0; i < 4; ++i) {
    printf("%d ", vetorB[i]);
}
    printf("\n");

    printf("Vetor da soma: ");
    for ( i = 0; i < 4; ++i) {
    printf("%d ", vetorSoma[i]);
}
    printf("\n");

    return 0;
}
