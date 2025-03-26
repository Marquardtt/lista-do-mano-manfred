//4. Construa um algoritmo que converta metros para centímetros. 

#include <stdio.h>

int main()
{
	int metros, cm;
	printf("Digite o valor em metros: ");
	scanf("%d", &metros);
	cm = metros * 100;
	printf("O valor em centimetros é: %d\n", cm);
}