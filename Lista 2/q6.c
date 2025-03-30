//6. Faça um programa que verifique se a letra digitada for: F ou M e imprima uma mensagem: masculino, feminino ou sexo inválido.

#include <stdio.h>
#include <string.h>
#include <math.h>

void main() {
	char sexo;
	printf("Digite M para maiusculo e F para feminino: ");
	scanf("%s", &sexo);

	switch (sexo)
	{
	case 'M':
		printf("Masculino\n");
		break;
	case 'F':
		printf("Feminino\n");
		break;
	default:
		printf("Sexo inválido\n");
		break;
	}
}

