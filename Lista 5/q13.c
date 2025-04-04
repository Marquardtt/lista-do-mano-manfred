//13. A função para saber se o número é par ou ímpar retornará 0(zero)se o número for par e 1 se for ímpar.A função para saber se o número e positivo ou negativo retornara 1 se o número for positivo, e - 1 se for negativo

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int valida_par(int valor) {
	if (valor % 2 == 0) {
		return 1;
	}
	else {
		return 0;
	}
}

int valida_negativo(int valor) {
	if (valor < 0) {
		return 1;
	}
	else {
		return 0;
	}
}

void main() {
	int opcao, valor;
	do {
		printf("\n\ndigite um valor: ");
		scanf("%d", &valor);
		printf("\n\n1 - par ou impar\n");
		printf("2 - positivo ou negativo\n");
		printf("3 - sair\n: ");
		scanf("%d", &opcao);
		switch (opcao) {
		case 1:
			if (valida_par(valor)) {
				printf("par");
			}
			else {
				printf("impar");
			}
			break;
		case 2:
			if (valida_negativo(valor)) {
				printf("negativo");
			}
			else {
				printf("positivo");
			}
			break;
		case 3:
			printf("finalizando");
			return;
		default:
			break;
		}
	} while (opcao != 3);
}