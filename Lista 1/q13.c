//12. Construa um algoritmo que peça 2 números inteiros e um número real. Calcule e mostre: 
//a. o produto do dobro do primeiro com metade do segundo. 
//b. a soma do triplo do primeiro com o terceiro.
//c. o terceiro elevado ao cubo.

#include <stdio.h>
#include <string.h>
#include <math.h>

void main()
{
	int num_1, num_2;
	float num_3;
	printf("Digite um número inteiro: ");
	scanf("%d", &num_1);
	printf("Digite outro número inteiro: ");
	scanf("%d", &num_2);
	printf("Digite um número real: ");
	scanf("%f", &num_3);
	printf("Soma do dobro do primeiro número com a metade do segundo: %d", (num_1 * 2) + (num_2 / 2));
	printf("\nSoma do triplo do primeiro número com o terceiro número: %.2f", (num_1 * 3) + num_3);
	printf("\nTerceiro número elevado ao cubo: %.2f", pow(num_3, 3));
}