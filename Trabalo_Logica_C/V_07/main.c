#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int vtr[10];
	int maior = vtr[0];
	int pm = 0;
	int i=0;
	
	
	for(i=0;i
	<10;i++){	
		printf("insira 10 numeros inteiros:\n");
		scanf("%d", &vtr[i]);
}
	for(i=0;i<10;i++){
		if(vtr[i]>maior){
			maior = vtr[i];
			pm = i;
		}						
	}
	printf("vetores: \n");
    for (i = 0; i < 10; i++) {
    	printf("\nVetor: ");
    	printf("%d ", vtr[i]);
}
    
    printf("\n O maior elemento do vetor e: %d\n", maior);
    printf("Ele se encontra na posiçao: %d\n", pm);

	
	return 0;
}
