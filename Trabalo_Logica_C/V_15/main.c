#include <stdio.h>
#include <stdlib.h>



int main() {
	
	
	int i, j;
	int vetor[20];

    printf("coloque 20 valores inteiros:\n");
    for (i = 0; i < 20; i++) {
    scanf("%d", &vetor[i]);
}
    printf("\nElementos do vetor sem repetiçao:\n");

    for (i = 0; i < 20; ++i) {
    int repetido = 0;

    for (j = 0; j < i; ++j) {
    if (vetor[i] == vetor[j]) {
    repetido = 1;
    break;
}
}
    if (!repetido) {
    printf("%d ", vetor[i]);
}
}
    
	
	
	
	
	return 0;
}
