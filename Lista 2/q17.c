//17. Faça um programa que peça os 3 lados de um triângulo. O programa deverá informar se os valores podem formar um triângulo,
//    ou seja, a soma de dois lados não pode ser menor que o lado restante.
//    Indique, caso os lados formem um triângulo, se o mesmo é: equilátero, isósceles ou escaleno.

#include <string.h>
#include <math.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

void main() {
    float lado1, lado2, lado3;

    printf("primeiro lado: ");
    scanf("%f", &lado1);
    printf("segundo lado: ");
    scanf("%f", &lado2);
    printf("terceiro lado: ");
    scanf("%f", &lado3);

    if ((lado1 + lado2 > lado3) && (lado1 + lado3 > lado2) && (lado2 + lado3 > lado1)) {
        printf("é um triangulo\n");

        if (lado1 == lado2 && lado2 == lado3) {
            printf("equilátero.\n");
        } else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
            printf("isósceles.\n");
        } else {
            printf("escaleno.\n");
        }
    } else {
        printf("nao é um triângulo.\n");
    }
}