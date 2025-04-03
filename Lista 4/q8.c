#include <stdio.h>

void main() {
    int matriculas[10];
    float notas[10][4];
    float medias[10];

    for (int i = 0; i < 10; i++) {
        printf("matricula do aluno %d: ", i + 1);
        scanf("%d", &matriculas[i]);

        float soma = 0;
        for (int j = 0; j < 4; j++) {
            printf("nota %d do aluno %d: ", j + 1, i + 1);
            scanf("%f", &notas[i][j]);
            soma += notas[i][j];
        }
        medias[i] = soma / 4;
    }

    printf("\nmatriculas e medias dos alunos:\n");
    for (int i = 0; i < 10; i++) {
        printf("matricula: %d, media: %.2f\n", matriculas[i], medias[i]);
    }
}