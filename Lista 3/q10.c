//10. Faça um programa que peça dois números inteiros (base e expoente), 
//    calcule e mostre o primeiro número elevado ao segundo número.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

void main() {
    int base, expoente;
    long resultado = 1;

    printf("Digite a base: ");
    scanf("%d", &base);

    printf("Digite o expoente: ");
    scanf("%d", &expoente);

    for (int i = 0; i < expoente; ++i) {
        resultado *= base;
    }

    printf("%d elevado a %d é: %ld\n", base, expoente, resultado);
}