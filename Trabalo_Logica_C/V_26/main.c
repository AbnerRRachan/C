#include <stdio.h>
#include <math.h>

int main() {
	int i;
int tamanho = 10;

    double vetor[tamanho];

    printf("Digite 10 numeros:\n");
    for (i = 0; i < tamanho; ++i) {
    scanf("%lf", &vetor[i]);
}
    double soma = 0.0;
    for ( i = 0; i < tamanho; ++i) {
    soma += vetor[i];
}
    double media = soma / tamanho;
    double somaDiferencasQuadradas = 0.0;
    
    for ( i = 0; i < tamanho; ++i) {
   somaDiferencasQuadradas += pow(vetor[i] - media, 2);
}
    double desvioPadrao = sqrt(somaDiferencasQuadradas / tamanho);

    printf("\nMédia: %.2lf\n", media);
    printf("Desvio Padrão: %.2lf\n", desvioPadrao);

    return 0;
}
