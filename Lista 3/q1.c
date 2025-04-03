//1. Faça um programa que peça dois números inteiros e gere os números inteiros que estão no intervalo entre eles.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

void main()
{
    int num1, num2;

    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &num1, &num2);

    printf("A intervalo entre %d e %d são:", num1, num2);

    for (int i = num1 + 1; i < num2; i++)
    {
        printf("%d ", i);
    }

}