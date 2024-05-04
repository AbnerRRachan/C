#include <stdio.h>

int main() {

int vtr[8];
int px;
int py;
int soma;
int i;


for (i=0;i<8;i++){
	printf("insira 8 numeros inteiros:\n");
	scanf("%d", &vtr[i]);
}
    
    printf("Digite a posicao X (entre 0 e %d): ", 8-1);
    scanf("%d", &px);
    printf("Digite a posicao Y (entre 0 e %d): ", 8-1);
    scanf("%d", &py);
		
	 soma = vtr[px] + vtr[py];
    if (px>=0 && px<8 && py>=0 && py<8) {
    printf("A soma dos valores nas posicoes %d e %d sao: %d\n", px, py, soma);
} else
     {
    printf("Posicao invalidas. Certifique-se de que X e Y estao entre 0 e %d.\n", 8-1);
}

    return 0;
}
