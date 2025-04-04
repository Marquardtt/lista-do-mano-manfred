#include <stdio.h>

void main() {
    int A[10];
    int soma = 0;

    printf("elementos do vetor A:\n");
    for (int i = 0; i < 10; i++) {
        printf("elemento %d: ", i + 1);
        scanf("%d", &A[i]);
    }

    for (int i = 0; i < 10; i++) {
        soma += A[i] * A[i];
    }

    printf("soma dos quadrados dos elementos do vetor: %d\n", soma);

    return 0;
}