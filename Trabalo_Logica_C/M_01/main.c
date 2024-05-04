#include <stdio.h>
#include <stdlib.h>



int main() {
	
	const int linhas = 4;
    const int colunas = 4;
	int contador = 0;
	int matriz[linhas][colunas];
	int i, j;

    printf("Digite os elementos da matriz 4x4:\n");
    for (i = 0; i < linhas; ++i) {
    	for ( j = 0; j < colunas; ++j) {
    		scanf("%d", &matriz[i][j]);
}
}

    printf("\nValores maiores que 10 na matriz:\n");
    for (i = 0; i < linhas; ++i) {
    	for (j = 0; j < colunas; ++j) {
    		if (matriz[i][j] > 10) {
    			printf("%d ", matriz[i][j]);
   				 contador++;
}
}
}
    printf("\nA matriz possui %d valores maiores que 10.\n", contador);

	return 0;
}
