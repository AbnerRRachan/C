#include <stdio.h>
#include <stdlib.h>



int main() {
	
	int vtr[6];
	int i;
	
	for(i=0;i<6;i++){
		printf("insira 6 numeros:");
		scanf("%d", &vtr[i]);
	}
	printf("valores na ordem inversa:\n");
	for(i=5;i>=0;i--){
		
		printf("%d\n", vtr[i]);
	}



	return 0;
}
