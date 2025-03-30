//7. Construa um algoritmo que peça dois números, calcule e mostre a soma dos mesmos  

#include <stdio.h>
#include <string.h>
#include <math.h>

void main()
{
	float num1, num2;
	printf("Digite um numero: ");
	scanf("%f", &num1);
	printf("Digite mais um numero: ");
	scanf("%f", &num2);
	printf("A soma dos dois numeros é %f", num1 + num2);
}