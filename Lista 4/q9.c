#include <stdio.h>

void main() {
    int n, i, count = 0;
    float soma = 0, media;
    float notas[n];

    printf("numero de alunos: ");
    scanf("%d", &n);

    printf("notas dos alunos:\n");
    for (i = 0; i < n; i++) {
        printf("Nota do aluno %d: ", i + 1);
        scanf("%f", &notas[i]);
        soma += notas[i];
    }

    media = soma / n;

    printf("\nmedia da turma é: %.2f\n", media);

    for (i = 0; i < n; i++) {
        if (notas[i] > media) {
            count++;
        }
    }

    printf("numero de alunos com nota superior a media: %d\n", count);
}