#include <stdio.h>
#include <stdlib.h>



int main() {
	
	const int linhas = 4;
    const int colunas = 4;
	int maiorValor ;
    int linhaMaior = 0;
    int colunaMaior = 0;
    int matriz[linhas][colunas];
	int i, j;
	
    printf("Digite os elementos da matriz 4x4:\n");
    for (i = 0; i < linhas; ++i) {
    	for (j = 0; j < colunas; ++j) {
    		scanf("%d", &matriz[i][j]);
}
}
maiorValor = matriz[0][0];

    printf("\nMatriz informada:\n");
    for (i = 0; i < linhas; ++i) {
    	for (j = 0; j < colunas; ++j) {
    		printf("%4d ", matriz[i][j]);
}
    printf("\n");
}
  

    for (i = 0; i < linhas; ++i) {
    	for (j = 0; j < colunas; ++j) {
    		if (matriz[i][j] > maiorValor) {
   				maiorValor = matriz[i][j];
   				linhaMaior = i;
				colunaMaior = j;
}
}
}
    printf("\nA localizacao do maior valor (%d) eh: linha %d, coluna %d\n", maiorValor, linhaMaior + 1, colunaMaior + 1);

	
	
	return 0;
}
