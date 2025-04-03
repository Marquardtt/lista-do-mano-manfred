//8. Supondo que a população de um país A seja da ordem de 80.000 habitantes com uma taxa anual de crescimento de 3% e que 
//   a população do país B seja, aproximadamente, de 200.000 habitantes com uma taxa de crescimento anual de 1,5%. Fazer um programa que calcule e escreva o número de anos necessários para que a população do país A ultrapasse ou iguale a população do país B, mantidas essas taxas de crescimento.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

void main() {
    int populacaoA = 80000;
    int populacaoB = 200000;
    double taxaCrescimentoA = 0.03;
    double taxaCrescimentoB = 0.015;
    int anos = 0;

    while (populacaoA < populacaoB) {
        populacaoA += populacaoA * taxaCrescimentoA;
        populacaoB += populacaoB * taxaCrescimentoB;
        anos++;
    }

    printf("Número de anos necessários para que a população do país 'A' ultrapasse ou iguale a população do país 'B': %d\n", anos);
}