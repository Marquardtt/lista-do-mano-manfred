#include <stdio.h>

void main() {
    int n, multiplier;

    printf("tamanho do vetor: ");
    scanf("%d", &n);

    int vetor[n];

    printf("elementos do vetor:\n");
    for (int i = 0; i < n; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("nimero inteiro para multiplicar: ");
    scanf("%d", &multiplier);

    printf("resultado:\n");
    for (int i = 0; i < n; i++) {
        vetor[i] *= multiplier;
        printf("elemento %d: %d\n", i + 1, vetor[i]);
    }
}