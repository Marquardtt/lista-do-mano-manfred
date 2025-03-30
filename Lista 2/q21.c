//21. Faça um programa que gere o diagnostico para algumas doenças.
//    Para isso e necessário fazer uma entrevista com o usuário, perguntando a ele se tem determinados sintomas:
//    a. Infecção nos pulmões ( 0 - não 1 - sim)
//    b. Temperatura (0 - normal 1 - anormal)
//    c. Coriza (0 - não 1 - sim)
//    d. Espirros (0 - não 1 - sim)
//    e. Se o paciente tiver infecção nos pulmões e temperatura anormal o diagnostico é Pneumonia.
//    f. Se o paciente tiver apenas um sintoma (qualquer) é resfriado.
//    g. Se o paciente tiver dois ou mais sintomas que não sejam infecção nos pulmões e temperatura anormal simultaneamente, o diagnóstico é gripe

#include <string.h>
#include <math.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

void main() {
    int infeccao_pulmoes, temperatura, coriza, espirros;
    int sintomas = 0;

    printf("Diagnóstico de doenças\n");
    printf("Responda com 0 (não) ou 1 (sim) para os seguintes sintomas:\n");

    printf("a. Infecção nos pulmões: ");
    scanf("%d", &infeccao_pulmoes);

    printf("b. Temperatura anormal: ");
    scanf("%d", &temperatura);

    printf("c. Coriza: ");
    scanf("%d", &coriza);

    printf("d. Espirros: ");
    scanf("%d", &espirros);

    if (coriza) sintomas++;
    if (espirros) sintomas++;
    if (infeccao_pulmoes) sintomas++;
    if (temperatura) sintomas++;

    if (infeccao_pulmoes && temperatura) {
        printf("Diagnóstico: Pneumonia\n");
    } else if (sintomas == 1) {
        printf("Diagnóstico: Resfriado\n");
    } else if (sintomas >= 2) {
        printf("Diagnóstico: Gripe\n");
    } else {
        printf("Nenhum diagnóstico identificado.\n");
    }
}