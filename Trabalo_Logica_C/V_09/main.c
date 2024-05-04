#include <stdio.h>
#include <stdlib.h>



int main() {
	int i;
	int vtr[6];
    
    printf("Digite 6 números inteiros pares:\n");
    for ( i = 0; i < 6; i++) {
    	do {
     	scanf("%d", &vtr[i]);

     		if (vtr[i] % 2 != 0) {
    		printf("Por favor, digite um número par.\n");
			}
		}while (vtr[i] % 2 != 0); 
	}	
    printf("Valores na ordem inversa:\n");
    for ( i = 6 - 1; i >= 0; i--) {
        printf("%d ", vtr[i]);
}
    

    return 0;
}
