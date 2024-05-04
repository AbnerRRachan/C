#include <stdio.h>
#include <stdlib.h>



int main() {
	
	int tamanho = 10;
	int vetor[tamanho];
	int i;
	int j;
	
    printf("Digite 10 valores:\n");
    for (i = 0; i < tamanho; i++) {
    scanf("%d", &vetor[i]);
}
    printf("\nValores iguais no vetor:\n");

    for (i = 0; i < tamanho - 1; i++) {
    for (j = i + 1; j < tamanho; j++) {
    if (vetor[i] == vetor[j]) {
    printf("%d é igual a %d\n", vetor[i], vetor[j]);
}
}
}
	
	
	return 0;
}
