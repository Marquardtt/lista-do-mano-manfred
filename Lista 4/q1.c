//1. Faça um programa que leia um vetor de 5 números inteiros e mostre - os.

#include <stdio.h>  
#include <stdlib.h>  

void main() {  
	int vet[4];

	for (int i = 0; i <= 4; i++)
	{
		printf("Digite o %dº numero: ");
		scanf("%d", &vet[i]);
	}

	for (int i = 0; i < 4;i++)
	{
		printf("Numero %d = %d", i, vet[i]);
	}
}