//22. Faça um programa que peça para n pessoas a sua idade, ao final o programa devera verificar se a média de idade da turma varia entre 0 e 25, 26 e 60 e maior que 60; e então, dizer se a turma é jovem, adulta ou idosa, conforme a média calculada.


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

void main() {
	int idade, media = 0;
	int i = 1;
	char opcao;
	do
	{
		printf("Digite uma idade: ");
		scanf("%d", &idade);
		media += idade / i;
		printf("Deseja adicionar outra idade?: ");
		scanf(" %c", &opcao, 1);
		i++;
	} while (tolower(opcao) == 's');

	if (media >= 0 && media <= 25) {
		printf("Jovem");
	}
	else if (media >= 26 && media <= 60) {
		printf("Jovem");
	}
	else {
		printf("Idosa");
	}
}