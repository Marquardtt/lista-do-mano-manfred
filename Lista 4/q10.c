#include <stdio.h>

void main() {
    int idades[30];
    float alturas[30];
    float somaAlturas = 0.0, mediaAltura;
    int i, contador = 0;

    printf("idades e alturas dos %d alunos:\n", 30);
    for (i = 0; i < 30; i++) {
        printf("Aluno %d - Idade: ", i + 1);
        scanf("%d", &idades[i]);
        printf("Aluno %d - Altura (em metros): ", i + 1);
        scanf("%f", &alturas[i]);
        somaAlturas += alturas[i];
    }

    mediaAltura = somaAlturas / 30;

    for (i = 0; i < 30; i++) {
        if (idades[i] > 13 && alturas[i] < mediaAltura) {
            contador++;
        }
    }

    printf("numero de alunos com mais de 13 anos e altura inferior a media: %d\n", contador);
}