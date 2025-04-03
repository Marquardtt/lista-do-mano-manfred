//15. Faça um programa que peça um número inteiro positivo e em seguida mostre este número invertido.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

void main() {
    int numero, invertido = 0;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &numero);

    while (numero > 0) {
        invertido = invertido * 10 + (numero % 10);
        numero /= 10;
    }

    printf("Número invertido: %d\n", invertido);
}