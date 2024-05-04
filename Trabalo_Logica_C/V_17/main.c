#include <stdio.h>
#include <stdlib.h>



int main() {
	
	
	int i;
	int vetor[10];
    
    printf("Digite 10 valores inteiros:\n");
    for ( i = 0; i <10; i++) {
    scanf("%d", &vetor[i]);
}

    for ( i = 0; i < 10; i++) {
    if (vetor[i] < 0) {
    vetor[i] = 0;
}
}

    printf("\nVetor modificado:\n");
    for ( i = 0; i < 10; i++) {
    printf("%d ", vetor[i]);
}
    
	
	
	
	
	
	
	
	
	return 0;
}
