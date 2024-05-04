#include <stdio.h>
#include <stdlib.h>


int main() {
	int numValores = 5;
	int i;
    float valores[numValores];

    printf("Digite 5 valores:\n");
    for (i = 0; i < numValores; i++) {
    scanf("%f", &valores[i]);
}
    float maior = valores[0];
    float menor = valores[0];
    int posicaoMaior = 0;
    int posicaoMenor = 0;
    
    for (i = 1; i < numValores; i++) {
    if (valores[i] > maior) {
    maior = valores[i];
    posicaoMaior = i;
}
    if (valores[i] < menor) {
    menor = valores[i];
    posicaoMenor = i;
}
}
    printf("\nPosiçao do maior valor: %d\n", posicaoMaior + 1);
    printf("Posiçao do menor valor: %d\n", posicaoMenor + 1);

	
	return 0;
}
