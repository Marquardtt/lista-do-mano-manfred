//7. Faça um programa que gere a tabuada de 1 a 10 de qualquer número. 
//   O usuário deve informar de qual número deseja ver a tabuada.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

void main() {
	int numeroEscolhido = 0;

	printf("Informe um número: ");
	scanf("%d", &numeroEscolhido);

	for (int i = 0; i < 10; ++i) {
		int resultado = numeroEscolhido * (i + 1);
		printf("%d x %d = %d\n", numeroEscolhido, i + 1, resultado);
	}
}