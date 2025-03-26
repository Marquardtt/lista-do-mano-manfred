//11. Construa um algoritmo que peça uma temperatura em graus Celsius(ºC), transforme e mostre na tela a temperatura em graus Farenheit(ºF). 

#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
	float temperatura;
	printf("Digite a temperatura em °C: ");
	scanf("%f", &temperatura);
	printf("A temperatura em °F é: %.2f", (temperatura * 9 / 5) + 32);
}