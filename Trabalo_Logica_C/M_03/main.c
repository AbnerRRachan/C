#include <stdio.h>
#include <stdlib.h>



int main() {
	
	
    const int linhas = 4;
    const int colunas = 4;
	int i, j;
    int matriz[linhas][colunas];

    for (i = 0; i < linhas; ++i) {
    	for (j = 0; j < colunas; ++j) {
    		matriz[i][j] = (i + 1) * (j + 1);
}
}

    printf("Matriz resultante:\n");
    for (i = 0; i < linhas; ++i) {
    	for (j = 0; j < colunas; ++j) {
    		printf("%4d ", matriz[i][j]);
}
    printf("\n");
    }
	
	return 0;
}
