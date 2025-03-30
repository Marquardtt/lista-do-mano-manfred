//2. Faça um programa que peça um valor e mostre na tela se o valor é positivo ou negativo

#include <stdio.h>
#include <string.h>
#include <math.h>

void main()
{
	float num;
	printf("Digite um número");
	scanf("%f", &num);

	if (num <= 0)
	{
		printf("O número negativo");
	}else {
		printf("O número é positivo");
	}
	return;
}
