#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int vtr[10];
	int maior = vtr[0];
	int menor = vtr[0];
	int i;
	
	for(i=0;i<10;i++){
		printf("insira 10 numeros: ");
		scanf("%d", &vtr[i]);
	}
	
	for(i=0;i<10;i++){
		if(vtr[i] > maior){
			maior = vtr[i];
		}else{
			menor = vtr[i];
		}
}
	
	printf("O maior elemento do vetor e: %d\n", maior);
	printf("O menor elemento do vetor e: %d\n", menor);

	
	
	
	
	
	
	
	
	return 0;
}
