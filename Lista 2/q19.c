//19. Faça um programa que peça um número correspondente a um determinado ano e em seguida informe se este ano é ou não bissexto

#include <string.h>
#include <math.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

void main() {
    int ano;

    printf("ano: ");
    scanf("%d", &ano);

    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
        printf("ano bissexto.\n");
    } else {
        printf("não é bissexto.\n");
    }
}