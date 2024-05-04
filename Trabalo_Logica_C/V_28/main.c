#include <stdio.h>

int main() {
	
int i;
int tamanho = 10;
int vetor[tamanho];
int v1[tamanho], v2[tamanho];
int cont_v1 = 0, cont_v2 = 0;

    printf("Digite 10 números inteiros:\n");
    for (i = 0; i < tamanho; ++i) {
    scanf("%d", &vetor[i]);

    if (vetor[i] % 2 != 0) {
    v1[cont_v1] = vetor[i];
    cont_v1++;
} 
    else {
    v2[cont_v2] = vetor[i];
    cont_v2++;
}
}
    printf("\nElementos utilizados de v1:\n");
    for ( i = 0; i < cont_v1; ++i) {
    printf("%d ", v1[i]);
}
    printf("\n");

    printf("\nElementos utilizados de v2:\n");
    for ( i = 0; i < cont_v2; ++i) {
    printf("%d ", v2[i]);
}
    printf("\n");

    return 0;
}
