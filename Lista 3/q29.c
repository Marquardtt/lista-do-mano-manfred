//29. Foi realizada uma pesquisa onde perguntou - se a cada um dos entrevistados o seguinte :
//	  a.clube de preferência 1 – Flamengo, 2 – Vasco, 3 – Botafogo, 4 - Fluminense, 5 - Outros
//	  b.salário mensal
//	  c.procedência: 1 – Rio de Janeiro, 2 - Outras cidades
//	  d.Deseja - se saber
//	  e.o número de torcedores por clube
//	  f.médias salariais dos torcedores do Flamengo e também do Fluminense
//	  g.o número de pessoas nascidas fora do Rio de Janeiro que torcem para o Flamengo
//	  h.o número de pessoas entrevistadas
//	  OBS : o número de pessoas entrevistadas é desconhecido

#include <stdio.h>
#include <stdlib.h>

void main() {
    int clube, procedencia;
    float salario;
    int torcedores[5] = {0, 0, 0, 0, 0};
    float salarioFlamengo = 0, salarioFluminense = 0;
    int contFlamengo = 0, contFluminense = 0;
    int flamengoForaRJ = 0;
    int totalEntrevistados = 0;

    while (1) {
        printf("Informe o clube de preferência (1 – Flamengo, 2 – Vasco, 3 – Botafogo, 4 - Fluminense, 5 - Outros, 0 para sair): ");
        scanf("%d", &clube);
        if (clube == 0) break;

        printf("Informe o salário mensal: ");
        scanf("%f", &salario);

        printf("Informe a procedência (1 – Rio de Janeiro, 2 - Outras cidades): ");
        scanf("%d", &procedencia);

        if (clube >= 1 && clube <= 5) {
            torcedores[clube - 1]++;
        }

        if (clube == 1) {
            salarioFlamengo += salario;
            contFlamengo++;
            if (procedencia == 2) {
                flamengoForaRJ++;
            }
        } else if (clube == 4) {
            salarioFluminense += salario;
            contFluminense++;
        }

        totalEntrevistados++;
    }

    printf("Número de torcedores por clube:\n");
    printf("Flamengo: %d\n", torcedores[0]);
    printf("Vasco: %d\n", torcedores[1]);
    printf("Botafogo: %d\n", torcedores[2]);
    printf("Fluminense: %d\n", torcedores[3]);
    printf("Outros: %d\n", torcedores[4]);

    if (contFlamengo > 0) {
        printf("Média salarial dos torcedores do Flamengo: %.2f\n", salarioFlamengo / contFlamengo);
    } else {
        printf("Média salarial dos torcedores do Flamengo: N/A\n");
    }

    if (contFluminense > 0) {
        printf("Média salarial dos torcedores do Fluminense: %.2f\n", salarioFluminense / contFluminense);
    } else {
        printf("Média salarial dos torcedores do Fluminense: N/A\n");
    }

    printf("Número de pessoas nascidas fora do Rio de Janeiro que torcem para o Flamengo: %d\n", flamengoForaRJ);
    printf("Número total de pessoas entrevistadas: %d\n", totalEntrevistados);
}