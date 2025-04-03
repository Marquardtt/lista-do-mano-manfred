//11. Faça um programa que mostre a soma desta serie S= 1/1 + 2/3 + 3/5+ 4/7+5/9+..+10/19.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

void main() {
    float soma = 0.0;

    for (int i = 1, j = 1; i <= 10; ++i, j += 2) {
        soma += (float)i / j;
    }

    printf("A soma da série S é: %.2f\n", soma);
}