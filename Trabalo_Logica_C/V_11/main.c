#include <stdio.h>
#include <stdlib.h>


int main() {
	
	int tamanho = 10;
	int i;
float vetor[tamanho];

    printf("Digite 10 n�meros reais:\n");
    for (i = 0; i < tamanho; ++i) {
    scanf("%f", &vetor[i]);
}
    int quantNegativos = 0;
    float somaPositivos = 0.0;

    for (i = 0; i < tamanho; ++i) {
    if (vetor[i] < 0) {
    quantNegativos++;
}   else {
    somaPositivos += vetor[i];
}
}
    printf("Quantidade de n�meros negativos: %d\n", quantNegativos);
    printf("Soma dos n�meros positivos: %.2f\n", somaPositivos);

		
	return 0;
}
