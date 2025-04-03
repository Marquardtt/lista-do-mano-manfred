//4. Faça um programa que calcule e mostre a média bimestral da turma. O usuário deve informar a quantidade de notas, bem como cada nota.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

void main() {
    int quantidade = 0;
    float soma = 0.0, media;

    printf("Informe a quantidade de notas: ");
    scanf("%d", &quantidade);

    float* notas = (float*)malloc(quantidade * sizeof(float));

    printf("Digite as notas:\n");
    for (int i = 0; i < quantidade; ++i) {
        scanf("%f", &notas[i]);
        soma += notas[i];
    }

    media = soma / quantidade;

    printf("A média bimestral da turma é: %.2f\n", media);

    free(notas);
}