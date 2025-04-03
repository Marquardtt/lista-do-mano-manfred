//6. Faça um programa que calcule o valor total investido e o custo médio por CD. 
//  O usuário deverá informar a quantidade de CDs e o valor para em cada um.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

void main() {
	int quantidade = 0;
	printf("De quantos cds nos referimos: ");
	scanf("%d", &quantidade);

	int* cds = (int*)malloc(quantidade * sizeof(int));

	for (int i = 0; i < quantidade; ++i){
		printf("Valor do CD %d°: ", i + 1);
		scanf("%d", &cds[i]);
	}

	printf("Valores dos Cds:\n");
	for (int i = 0; i < quantidade; ++i) {
		printf("CD %d°: %d \n", i, cds[i]);
	}
	free(cds);
}