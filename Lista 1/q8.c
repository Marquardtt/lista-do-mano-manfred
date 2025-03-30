//8. Construa um algoritmo que peça as 4 notas bimestrais e mostre a média, com uma casa decimal 

#include <stdio.h>
#include <string.h>
#include <math.h>

void main()
{
	float nota, soma = 0;
	for (int i = 1; i <= 4; i++) {
		printf("Digite a nota número %d", i);
		scanf("%f", &nota);
		soma += nota;
	}
	printf("A média é %.1f", soma / 4);
	return;
}