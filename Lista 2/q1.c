//1. Faça um programa que peça dois números e imprima o maior deles.

#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
	float num_1, num_2;
	printf("Digite um número");
	scanf("%f", &num_1);
	printf("Digite outro número");
	scanf_s("%f", &num_2);

	if (num_1 > num_2)
	{
		printf("Número 1 é maior -> %f", num_1);
	} else{
		printf("Número 2 é maior -> %f", num_2);
	}
	return 0;
}
