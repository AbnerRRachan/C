#include <stdio.h>
#include <stdlib.h>



int main() {
	
	int i, x;
	int vetor[10];

    printf("Digite 10 valores inteiros:\n");
    for ( i = 0; i < 10; i++) {
    	scanf("%d", &vetor[i]);
}
    
    printf("Digite um n�mero inteiro x:\n");
    scanf("%d", &x);

    printf("\nM�ltiplos de %d no vetor:\n", x);
    for ( i = 0; i < 10; i++) {
    	if (vetor[i] % x == 0) {
    		printf("%d ", vetor[i]);
}
}

	
	
	
	return 0;
}
