//23. Faça um programa para um caixa eletrônico. O programa deverá perguntar ao usuário a valor do saque e depois informar quantas notas de cada valor serão fornecidas. As notas disponíveis serão as de 1, 5, 10, 50 e 100 reais. O valor mínimo é de 10 reais e o máximo de 600 reais. O programa não deve se preocupar com a quantidade de notas existentes na máquina.
//	  Exemplo 1: Para sacar a quantia de 256 reais, o programa fornece duas notas de 100, uma nota de 50, uma nota de 5 e uma nota de 1 .
//	  Exemplo 2 : Para sacar a quantia de 399 reais, o programa fornece três notas de 100, uma nota de 50, quatro notas de 10, uma nota de 5 e quatro notas de 1.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

void main() {
	int valorSaque;
	int notas100, notas50, notas10, notas5, notas1;

	do {
		printf("Informe o valor do saque (minimo R$10, maximo R$600): ");
		scanf("%d", &valorSaque);
	} while (valorSaque < 10 || valorSaque > 600);

	notas100 = valorSaque / 100;
	valorSaque %= 100;

	notas50 = valorSaque / 50;
	valorSaque %= 50;

	notas10 = valorSaque / 10;
	valorSaque %= 10;

	notas5 = valorSaque / 5;
	valorSaque %= 5;

	notas1 = valorSaque;

	printf("Notas 100 - %d\n", notas100);
	printf("Notas 50 - %d\n", notas50);
	printf("Notas 10 - %d\n", notas10);
	printf("Notas 5 - %d\n", notas5);
	printf("Notas 1 - %d", notas1);
	return;
}