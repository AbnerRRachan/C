#include <stdio.h>

int main() {
int i;
int numero;
int numerosPares[6], numerosImpares[6];
int somaPares = 0;
int contPares = 0, contImpares = 0;

    printf("Digite 6 n�meros inteiros:\n");
    for ( i = 0; i < 6; ++i) {
    scanf("%d", &numero);

    if (numero % 2 == 0) {
    numerosPares[contPares] = numero;
    somaPares += numero;
    contPares++;
} else {
    numerosImpares[contImpares] = numero;
    contImpares++;
}
}
    printf("\nN�meros pares digitados:\n");
    for (i = 0; i < contPares; ++i) {
    printf("%d ", numerosPares[i]);
}
    printf("\nSoma dos n�meros pares: %d\n", somaPares);

    printf("\nN�meros �mpares digitados:\n");
    for ( i = 0; i < contImpares; ++i) {
    printf("%d ", numerosImpares[i]);
}
    printf("\nQuantidade de n�meros �mpares: %d\n", contImpares);

    return 0;
}
