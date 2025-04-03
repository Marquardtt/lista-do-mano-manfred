//2. Faça um programa que leia um vetor de 5 números inteiros e mostre a soma, a multiplicação e os números.

#include <stdio.h>  
#include <stdlib.h>  

void main() {
	int vet[5];

	for (int i = 0; i < 5; i++)
	{
		printf("Digite o %dº numero: ", i + 1);
		scanf("%d", &vet[i]);
	}

	for (int i = 0; i < 5; i++)
	{
		printf("Numero %d = %d\n", i, vet[i]);
	}

	printf("Soma: %d\n", vet[0] + vet[1] + vet[2] + vet[3] + vet[4]);
	printf("Multiplicação: %d", vet[0] * vet[1] * vet[2] * vet[3] * vet[4]);
}