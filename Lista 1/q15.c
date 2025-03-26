//14. Elabore um programa para calcular a quantidade necessária de latas de tinta para pintar uma parede com X metros de largura por H metros de altura. 
//	  Considere que o consumo de latas de tinta por metro quadrado é 3 litros e a quantidade de tinta por lata é 3,6 litros.t 

#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
	float largura, altura, area_total, total_latas, total_litros, quantidade_tinta = 3.6;

	printf("Qual a largura da parede que você deseja pintar? ");
	scanf("%f", &largura);
	printf("Qual a altura da parede que você deseja pintar? ");
	scanf("%f", &altura);

	area_total = altura * largura;
	total_litros = area_total * 3;
	total_latas = ceil(total_litros / quantidade_tinta);

	printf("São necessárias %.0f latas de tinta para realizar a pintura da parede.", total_latas);
	return 0;
}