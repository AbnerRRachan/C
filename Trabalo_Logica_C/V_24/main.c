#include <stdio.h>

int main() {
	int i ;
int numConjuntos = 10;

int alunoMaisAlto, alunoMaisBaixo;
    
    double alturaMaisAlta = 0.0, alturaMaisBaixa = 10000.0;  

    for (i = 0; i < numConjuntos; ++i) {
    int numeroAluno;
    double alturaAluno;

    printf("Digite o número do aluno %d: ", i + 1);
    scanf("%d", &numeroAluno);
        
    printf("Digite a altura do aluno %d (em metros): ", i + 1);
    scanf("%lf", &alturaAluno);

    if (alturaAluno > alturaMaisAlta) {
    alturaMaisAlta = alturaAluno;
    alunoMaisAlto = numeroAluno;
}
    if (alturaAluno < alturaMaisBaixa) {
    alturaMaisBaixa = alturaAluno;
    alunoMaisBaixo = numeroAluno;
}
}
    printf("\nAluno mais alto:\n");
    printf("Número do aluno: %d\n", alunoMaisAlto);
    printf("Altura: %.2f metros\n", alturaMaisAlta);

    printf("\nAluno mais baixo:\n");
    printf("Número do aluno: %d\n", alunoMaisBaixo);
    printf("Altura: %.2f metros\n", alturaMaisBaixa);

    return 0;
}
