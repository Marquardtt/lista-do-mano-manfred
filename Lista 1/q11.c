//11. Construa um algoritmo que peça a temperatura em graus Farenheit(ºF), transforme e mostre na tela a temperatura em graus Celsius(ºC). C=5*(F-32)/9}

#include <stdio.h>
#include <string.h>
#include <math.h>

void main()
{
	float temperatura;
	printf("Digite a temperatura em °F: ");
	scanf_s("%f", &temperatura);
	printf("A temperatura em °C é: %.2f", 5*(temperatura-32)/9);
}



