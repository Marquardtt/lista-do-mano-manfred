//1. Faça um programa que leia um número, passe este número como parâmetro para uma função que retorne 0 se o número for par ou 1 se o número for ímpar.

#include <stdio.h>  
#include <stdlib.h>  

int retorna(int num) {
	if (num % 2 == 0)
	{
		return 0;
	}
	else {
		return 1;
	}
}

void main() {
	int num;
	printf("Digite um numero: ");
	scanf("%d", &num);
	if (retorna(num))
	{
		printf("é par");
	}
	else {
		printf("é impar");
	}
}