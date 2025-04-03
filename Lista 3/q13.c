//13. Faça um programa que mostre a soma desta serie S = (37*38)/1 + (36*37)/2 + (35*36)/3 + ... + (1*2)/37.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

void main() {
    float soma = 0.0;

    for (int i = 37, j = 1; i >= 1; --i, ++j) {
        soma += (float)(i * (i + 1)) / j;
    }

    printf("A soma da série S é: %.2f\n", soma);
}