#include <stdio.h>

#define total_questoes 10
#define total_alunos 3

int corrigirProva(char gabarito[], char respostas_alunos[total_alunos][total_questoes]) {
    int notas[total_alunos] = {0};
	int i,j;
	 
	 
	 
	 
	 
	 
	 
    for (i = 0; i < total_alunos; ++i) {
    for (j = 0; j < total_questoes; ++j) {
    if (respostas_alunos[i][j] == gabarito[j]) {
    notas[i]++;
}
}
}
    return *notas;
}
float calcularPercentualAprovacao(int notas[total_alunos]) {
    int aprovados = 0;

    for (i = 0; i < total_alunos; ++i) {
    if (notas[i] >= 7) {
    aprovados++;
}
}
    return (float)aprovados / total_alunos * 100;
}
int main() {
    char gabarito[total_questoes] = {'a', 'b', 'c', 'd', 'e', 'a', 'b', 'c', 'd', 'e'};
    char respostas_alunos[total_alunos][total_questoes];
    int notas[total_alunos];

    for (i = 0; i < total_alunos; ++i) {
    printf("Digite as respostas do aluno %d: ", i + 1);
    for ( j = 0; j < total_questoes; ++j) {
    scanf(" %c", &respostas_alunos[i][j]);
}
}
    int *pNotas = corrigirProva(gabarito, respostas_alunos);
    for (i = 0; i < total_alunos; ++i) {
    notas[i] = *(pNotas + i);
}
    for (i = 0; i < total_alunos; ++i) {
    printf("Matrícula: %d, Respostas: ", i + 1);
    for ( j = 0; j < total_questoes; ++j) {
    printf("%c ", respostas_alunos[i][j]);
}
    printf("Nota: %d\n", notas[i]);
}
    float percentual_aprovacao = calcularPercentualAprovacao(notas);
    printf("\nPercentual de aprovação: %.2f%%\n", percentual_aprovacao);

    return 0;
}
