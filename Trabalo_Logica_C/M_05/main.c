#include <stdio.h>
#include <stdlib.h>



int main() {
	
	const int linhas = 5;
    const int colunas = 5;
	int i, j;
    int matriz[linhas][colunas];

    printf("Digite os elementos da matriz 5x5:\n");
    for (i = 0; i < linhas; ++i) {
    	for (j = 0; j < colunas; ++j) {
    		scanf("%d", &matriz[i][j]);
}
}
    int valorX;
    printf("Digite o valor a ser buscado: ");
    scanf("%d", &valorX);

    int encontrado = 0;
    int linhaEncontrado, colunaEncontrado;

    for (i = 0; i < linhas; ++i) {
    	for ( j = 0; j < colunas; ++j) {
    		if (matriz[i][j] == valorX) {
    			encontrado = 1;
    			linhaEncontrado = i;
    			colunaEncontrado = j;
    		break;
}
}
    if (encontrado) {
    break;
}
}
    if (encontrado) {
    printf("\nO valor %d foi encontrado na matriz na linha %d, coluna %d.\n", valorX, linhaEncontrado + 1, colunaEncontrado + 1);
} else {
    printf("\nO valor %d nao foi encontrado na matriz.\n", valorX);
}
	
	
	return 0;
}
