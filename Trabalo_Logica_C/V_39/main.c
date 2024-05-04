#include <stdio.h>

int coeficienteBinomial(int n, int k) {
    if (k == 0 || k == n) {
    return 1;
} else {
    return coeficienteBinomial(n - 1, k - 1) + coeficienteBinomial(n - 1, k);
}
}

int main() {
int n, i, j;

    printf("Digite o número de linhas do Triângulo de Pascal: ");
    scanf("%d", &n);

    for ( i = 0; i < n; i++) {
    for ( j = 0; j <= i; j++) {
    printf("%d ", coeficienteBinomial(i, j));
}
    printf("\n");
}
    return 0;
}
