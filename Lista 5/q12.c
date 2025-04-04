//12. Faça um programa que tenha uma função chamada MENU, que apresenta um menu, permita escolher uma opção e retorne esta opção para o programa principal.Esta opção será utilizada por um case para chamar a função correspondente.O menu e terá as seguintes opções :
//    1 - Par ou ímpar
//    2 - Positivo ou negativo
//    3 – Sair

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
		switch (opcao){
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