#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main() {
    const int ordem = 4;
	int i, j;
    int matrizOriginal[ordem][ordem];
    int matrizTriangularInferior[ordem][ordem];

    srand(time(NULL));

    for (i = 0; i < ordem; ++i) {
    	for (j = 0; j < ordem; ++j) {
    		matrizOriginal[i][j] = rand() % 20 + 1;
}
}
    for ( i = 0; i < ordem; ++i) {
    	for (j = i + 1; j < ordem; ++j) {
    		matrizOriginal[i][j] = 0;
}
}
    for ( i = 0; i < ordem; ++i) {
    	for ( j = 0; j < ordem; ++j) {
    		matrizTriangularInferior[i][j] = matrizOriginal[i][j];
}
}
    printf("Matriz Original:\n");
    for ( i = 0; i < ordem; ++i) {
    	for (j = 0; j < ordem; ++j) {
    		printf("%4d ", matrizOriginal[i][j]);
}
    printf("\n");
}
    printf("\nMatriz Triangular Inferior:\n");
    for (i = 0; i < ordem; ++i) {
    	for (j = 0; j < ordem; ++j) {
    		printf("%4d ", matrizTriangularInferior[i][j]);
}
    printf("\n");
}
    return 0;
}
