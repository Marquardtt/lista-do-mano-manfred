//12. Faça um programa que mostre a soma desta serie S = 1/1 + 3/2 + 5/3 + 7/4 + ... + 99/50.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

void main() {
    float soma = 0.0;

    for (int i = 1, j = 1; i <= 99; i += 2, ++j) {
        soma += (float)i / j;
    }

    printf("A soma da série S é: %.2f\n", soma);
}