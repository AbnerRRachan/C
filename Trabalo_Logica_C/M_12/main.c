#include <stdio.h>
#include <stdlib.h>



int main() {
    const int ordem = 3;
	int i, j;
    int matriz[ordem][ordem];

    printf("Digite os elementos da matriz %dx%d:\n", ordem, ordem);
    for (i = 0; i < ordem; ++i) {
    	for ( j = 0; j < ordem; ++j) {
    		scanf("%d", &matriz[i][j]);
}
}
    int somaDiagonalSecundaria = 0;
    for (i = 0; i < ordem; ++i) {
    	somaDiagonalSecundaria += matriz[i][ordem - 1 - i];
}
    printf("\nMatriz informada:\n");
    for (i = 0; i < ordem; ++i) {
   		for (j = 0; j < ordem; ++j) {
    		printf("%4d ", matriz[i][j]);
}
    printf("\n");
}
    printf("\nA soma dos elementos na diagonal secundária e: %d\n", somaDiagonalSecundaria);

    return 0;
}
