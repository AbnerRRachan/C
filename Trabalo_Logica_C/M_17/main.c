#include <stdio.h>

#define ALUNOS 10
#define PROVAS 3
int i,j;
float encontrarPiorNota(float notas[PROVAS]) {
    float piorNota = notas[0];
    for (i = 1; i < PROVAS; i++) {
    if (notas[i] < piorNota) {
    piorNota = notas[i];
}
}
    return piorNota;
}
int main() {
    float matrizNotas[ALUNOS][PROVAS];
	int i,j;
    for (i = 0; i < ALUNOS; i++) {
    printf("Informe as notas do aluno %d:\n", i + 1);
    for (j = 0; j < PROVAS; j++) {
    printf("Nota na prova %d: ", j + 1);
    scanf("%f", &matrizNotas[i][j]);
}
}
    int pioresProva1 = 0, pioresProva2 = 0, pioresProva3 = 0;

    for (i = 0; i < ALUNOS; i++) {
        float piorNota = encontrarPiorNota(matrizNotas[i]);

    if (matrizNotas[i][0] == piorNota) {
    pioresProva1++;
} else if (matrizNotas[i][1] == piorNota) {
    pioresProva2++;
} else if (matrizNotas[i][2] == piorNota) {
    pioresProva3++;
}
}
    printf("Número de alunos cuja pior nota foi na prova 1: %d\n", pioresProva1);
    printf("Número de alunos cuja pior nota foi na prova 2: %d\n", pioresProva2);
    printf("Número de alunos cuja pior nota foi na prova 3: %d\n", pioresProva3);

    return 0;
}

