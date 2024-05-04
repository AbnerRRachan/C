#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	double vtrp[10];
	double vtrq[10];
	int i;
	
	
	for(i=0;i<10;i++){	
	printf("insira 10 numeros reais \n");
	scanf("%lf", &vtrp[i]);
}
	  for (i=0;i<10;i++){
    vtrq[i] = vtrp[i] * vtrp[i];
}
    printf("\nVetor Original:\n");
    for (i=0;i<10;i++) {
    printf("%.2lf\n",vtrp[i]);
}
    printf("\nVetor em Quadrados:\n");
    for (i=0;i<10;i++) {
    printf("%.2lf\n",vtrq[i]);
 }

	
	
	
	
	
	return 0;
}
