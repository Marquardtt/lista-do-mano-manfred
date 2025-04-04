//14. Faça um programa que leia uma palavra e execute a opção escolhida pelo usuário conforme o menu que deve ser mostrado na tela :
//	  a) - Todas as letras em maiúscula;
//	  b) - Todas as letras em minúscula;
//	  c) - Inverte palavra;
//	  d) - Tamanho da palavra;
//	  e) - Fim;

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

void maiuscula(char palavra[]) {
	for (int i = 0; palavra[i] != '\0'; i++) {
		palavra[i] = toupper(palavra[i]);
	}
}

void minuscula(char palavra[]) {
	for (int i = 0; palavra[i] != '\0'; i++) {
		palavra[i] = tolower(palavra[i]);
	}
}

void inverter(char palavra[]) {
	int len = strlen(palavra);
	for (int i = 0; i < len / 2; i++) {
		char temp = palavra[i];
		palavra[i] = palavra[len - i - 1];
		palavra[len - i - 1] = temp;
	}
}

int tamanho(char palavra[]) {
	return strlen(palavra);
}

void main() {
	char palavra[99];
	char opcao;

	printf("a) - Todas as letras em maiúscula\n");
	printf("b) - Todas as letras em minúscula\n");
	printf("c) - Inverte palavra\n");
	printf("d) - Tamanho da palavra\n");
	printf("e) - Fim\n");
	scanf(" %c", &opcao);

	printf("Digite uma palavra: ");
	scanf("%s", palavra);

	switch (tolower(opcao)) {
	case 'a':
		maiuscula(palavra);
		printf("Resultado: %s\n", palavra);
		break;
	case 'b':
		minuscula(palavra);
		printf("Resultado: %s\n", palavra);
		break;
	case 'c':
		inverter(palavra);
		printf("Resultado: %s\n", palavra);
		break;
	case 'd':
		printf("Tamanho: %d\n", tamanho(palavra));
		break;
	case 'e':
		printf("Finalizando\n");
		return;
	default:
		printf("Erro\n");
		break;
	}
}