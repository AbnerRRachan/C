#include <stdio.h>
#include <stdlib.h>



int main() {
	
	float notas[15];
	int i;
	float soma = 0.0;
	float media = 0;
	
	
	printf("insira as notas dos alunos :");
	for(i=0;i<15;i++){
		printf("Nota do aluno %d: ", i + 1);
    	scanf("%f", &notas[i]);
	}
	
	
	for(i=0;i<15;i++){
		soma += notas[i];
	}
	
	media = soma / 15;
	printf("A media geral das notas é: %.2f\n", media);

	
	
	
	
	return 0;
}
