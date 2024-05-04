#include <stdio.h>
#include <stdlib.h>



int main() {
	int i;
	int tamanho = 10;
int vetorOriginal[tamanho];
int vetorImpares[tamanho];
    
    printf("Digite 10 números inteiros no intervalo [0, 50]:\n");
    for (i = 0; i < tamanho; i++) {
   		do {
    		scanf("%d", &vetorOriginal[i]);
}while(vetorOriginal[i] < 0 || vetorOriginal[i] > 50);
}
    int indiceImpares = 0;
    for (i = 0; i < tamanho; i++) {
    	if (vetorOriginal[i] % 2 != 0) {
    		vetorImpares[indiceImpares] = vetorOriginal[i];
    		indiceImpares++;
}
}
    printf("\nVetor Original:\n");
    for (i = 0; i < tamanho; i++) {
   	 	printf("%d ", vetorOriginal[i]);
    	if ((i + 1) % 2 == 0) {
  			printf("\n");
}
}
    printf("\nVetor de Ímpares:\n");
    for (i = 0; i < indiceImpares; i++) {
   		 printf("%d ", vetorImpares[i]);
    		if ((i + 1) % 2 == 0) {
    			printf("\n");
}
}
	
	return 0;
}
