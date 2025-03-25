//9. Construa um algoritmo que pergunte quanto você ganha por hora e o número de horas trabalhadas no mês. Calcule e mostre o total do seu salário no referido mês. 

#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
	int horas;
	float valor;

	printf("Quantas horas você trabalha no mês? ");
	scanf("%d", &horas);
	printf("Quanto você recebe por hora? ");
	scanf("%f", &valor);
	printf("Você recebe %.2f por mês", horas * valor);
}