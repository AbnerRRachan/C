#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {

 int vtr[6];
 int i;
	
	for(i=0;i<6;i++){
		printf("insira um numero. ");
		scanf("%d", &vtr[i]);
	}
	
	printf("vtr[0] = %d \n", vtr[0]);
	printf("vtr[1] = %d\n", vtr[1]);
	printf("vtr[2] = %d\n", vtr[2]);
	printf("vtr[3] = %d\n", vtr[3]);
	printf("vtr[4] = %d\n", vtr[4]);
	printf("vtr[5] = %d\n", vtr[5]);
	
	return 0;
}
