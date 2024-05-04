#include <stdio.h>
#include <stdlib.h>



int main() {
	
	const int ordem = 5;
	int i, j;
    int matriz[ordem][ordem];

    for (i = 0; i < ordem; ++i) {
    	for (j = 0; j < ordem; ++j) {
    		if (i == j) {
    			matriz[i][j] = 1;
} else {
    matriz[i][j] = 0;
}
}
}
    printf("Matriz resultante:\n");
    for (i = 0; i < ordem; ++i) {
    	for (j = 0; j < ordem; ++j) {
    		printf("%d ", matriz[i][j]);
}
    printf("\n");
}
	return 0;
}
