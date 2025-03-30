//3. Faça um programa que peça um número e imprima se o número é par ou ímpar

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
	}
	else {
		printf("O número é impar");
	}
	return;
}
