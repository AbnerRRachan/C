#include <stdio.h>
#include <stdlib.h>



int main() {
	
	int i;
	int codigo;
    float vetor[5];

    printf("Digite 5 n�meros reais:\n");
    for ( i = 0; i < 5; i++) {
    scanf("%f", &vetor[i]);
}

    printf("Digite um c�digo (0 para finalizar, 1 para ordem direta, 2 para ordem inversa):\n");
    scanf("%d", &codigo);

    switch (codigo) {
    case 0:
    printf("Programa finalizado.\n");
    break;
    case 1:
    printf("Vetor na ordem direta:\n");
    for ( i = 0; i < 5; i++) {
    printf("%.2f ", vetor[i]);
}
    printf("\n");
    break;
    case 2:
    printf("Vetor na ordem inversa:\n");
    for (i = 5 - 1; i >= 0; i--) {
    printf("%.2f ", vetor[i]);
}
    printf("\n");
    break;
    default:
    printf("C�digo inv�lido.\n");
    break;
}
	return 0;
}
