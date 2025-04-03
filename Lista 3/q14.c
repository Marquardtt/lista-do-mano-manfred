//14. Faça um programa que peça 10 números inteiros, calcule e mostre a quantidade de números pares, 
//    a quantidade de números impares e a soma de todos os números.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

void main() {
    int numeros[10] = {0};
    int pares = 0, impares = 0, soma = 0;

    printf("Digite 10 números inteiros:\n");

    for (int i = 0; i < 10; ++i) {
        scanf("%d", &numeros[i]);
        soma += numeros[i];
        if (numeros[i] % 2 == 0) {
            pares++;
        } else {
            impares++;
        }
    }

    printf("Quantidade de números pares: %d\n", pares);
    printf("Quantidade de números ímpares: %d\n", impares);
    printf("Soma de todos os números: %d\n", soma);
}