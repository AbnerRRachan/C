#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int vtr[10];
	int i;
	int pvtr = 0;
	
	
	
	for(i=0;i<10;i++){
		printf("insira um numero: ");
		scanf("%d", &vtr[i]);
	}
	
	
	for(i=0;i<10;i++){
		if(vtr[i] %2==0 ){
			pvtr++;
		}
	}
	
	printf("o vetor tem %d valores pares\n", pvtr);
	
	return 0;
}
