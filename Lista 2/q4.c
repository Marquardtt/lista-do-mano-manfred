//4. Faça um programa que peça um número e se este número for par, transforme-o em ímpar e vice-versa

#include <stdio.h>
#include <string.h>
#include <math.h>

void main() {
	int num;
	printf("Digite um número");
	scanf("%d", &num);

	if ((num % 2) == 0)
	{
		printf("O número par");
		printf("\nNúmero transformado: %d", num + 1);
	}
	else {
		printf("O número é impar");
		printf("\nNúmero transformado: %d", num + 1);
	}
	return;
}

