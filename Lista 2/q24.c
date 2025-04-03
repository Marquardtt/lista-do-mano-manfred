//24. Faça um programa que leia um número inteiro menor que 1000 e imprima a quantidade de centenas, dezenas e unidades do mesmo. Observando os termos no plural a colocação do "e", da vírgula entre outros.
//	  Exemplo: 326 - 3 centenas, 20 dezenas e 6 unidades - 1 dezena e 2 unidades
//	  Testar com : 326, 300, 100, 320, 310, 305, 301, 101, 311, 111, 25, 20, 10, 21, 11, 1, 7 e 16

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

void main() {
    int num, centenas, dezenas, unidades;

    printf("Digite um número inteiro menor que 1000: ");
    scanf("%d", &num);

    if (num >= 1000 || num < 0) {
        printf("Número inválido!\n");
        return;
    }

    centenas = num / 100;
    dezenas = (num % 100) / 10;
    unidades = num % 10;

    if (centenas > 0) {
        printf("%d %s", centenas, (centenas == 1) ? "centena" : "centenas");
        if (dezenas > 0 || unidades > 0) {
            printf(", ");
        }
    }

    if (dezenas > 0) {
        printf("%d %s", dezenas, (dezenas == 1) ? "dezena" : "dezenas");
        if (unidades > 0) {
            printf(" e ");
        }
    }

    if (unidades > 0) {
        printf("%d %s", unidades, (unidades == 1) ? "unidade" : "unidades");
    }

    printf("\n");
}