//10. Uma firma contrata um encanador a 25,00 por dia. Crie um programa que solicite o número de dias trabalhados pelo encanador e imprima a quantia líquida que deverá ser paga,
//	 sabendo-se que são descontados 8% para o Imposto de Renda. 

#include <stdio.h>
#include <string.h>
#include <math.h>

void main()
{
	float valor_dia = 25.00, salario_bruto;
	int dias_trabalhados;
	printf("Digite a quantidade de dias trabalhados: ");
	scanf("%d", &dias_trabalhados);
	salario_bruto = dias_trabalhados * valor_dia;
	printf("Quantia liquida a ser paga: %.2f", salario_bruto - (salario_bruto) * 8.0 / 100);
	return;
}