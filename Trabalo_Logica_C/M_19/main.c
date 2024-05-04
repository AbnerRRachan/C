#include <stdio.h>

#define ALUNOS 5
#define COLUNAS 4
int i,j;
float calcularNotaFinal(float mediaProvas, float mediaTrabalhos) {
    return mediaProvas + mediaTrabalhos;
}
int main() {
    int matriz[ALUNOS][COLUNAS];
    float notasFinais[ALUNOS];
    int maiorNotaIndex = 0;
    float mediaNotasFinais = 0;
	int i,j;
    for (i = 0; i < ALUNOS; i++) {
    printf("Informe a matrícula, média das provas e média dos trabalhos do aluno %d:\n", i + 1);
    for ( j = 0; j < COLUNAS - 1; j++) {
    printf("Coluna %d: ", j + 1);
    scanf("%d", &matriz[i][j]);
}
    matriz[i][COLUNAS - 1] = calcularNotaFinal(matriz[i][1], matriz[i][2]);

    if (notasFinais[i] > notasFinais[maiorNotaIndex]) {
    maiorNotaIndex = i;
}
    notasFinais[i] = matriz[i][COLUNAS - 1];
    mediaNotasFinais += notasFinais[i];
}
    printf("\nMatrícula do aluno com a maior nota final: %d\n", matriz[maiorNotaIndex][0]);

    mediaNotasFinais /= ALUNOS;
    printf("Média aritmética das notas finais: %.2f\n", mediaNotasFinais);

    return 0;
}
