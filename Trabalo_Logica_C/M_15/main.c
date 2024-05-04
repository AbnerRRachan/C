#include <stdio.h>

#define ALUNOS 5
#define QUESTOES 10

int main() {
    
    char respostasAlunos[ALUNOS][QUESTOES];
    char gabarito[QUESTOES];
	int i,j;
    printf("Digite as respostas dos alunos (a, b, c ou d):\n");
    for (i = 0; i < ALUNOS; i++) {
    printf("Aluno %d:\n", i + 1);
    for (j = 0; j < QUESTOES; j++) {
    printf("Resposta para a questao %d: ", j + 1);
    scanf(" %c", &respostasAlunos[i][j]);
}
}
    printf("\nDigite o gabarito (a, b, c ou d):\n");
    for (i = 0; i < QUESTOES; i++) {
    printf("Resposta para a questao %d: ", i + 1);
    scanf(" %c", &gabarito[i]);
}
    int resultado[ALUNOS];
    for (i = 0; i < ALUNOS; i++) {
    resultado[i] = 0;
    for (j = 0; j < QUESTOES; j++) {
    if (respostasAlunos[i][j] == gabarito[j]) {
    resultado[i]++;
}
}
}
    printf("\nResultados:\n");
    for (i = 0; i < ALUNOS; i++) {
    printf("Aluno %d: Pontuacao %d\n", i + 1, resultado[i]);
    }
    return 0;
}

