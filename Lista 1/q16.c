//16. Construa um algoritmo que peça o salário bruto mensal de um funcionário, calcule e apresente os valores conforme modelo abaixo :
//	  Salário Bruto : R$
//	  (-) IR(15 %) : R$
//	  (-) INSS(11 %) : R$
//	  (-) Sindicato(3 %) : R$
//	  Salário Liquido : R$
//	  Obs. :
//	  Descontos = IR + INSS + Sindicato
//	  Salário Líquido = Salário Bruto – Descontos

#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
	float salario_bruto, desconto_ir, desconto_inss, desconto_sindicato, total_descontos, salario_liquido;
	printf("Digite seu salário bruto mensal: ");
	scanf("%f", &salario_bruto);
	
	desconto_ir = salario_bruto * (15.0 / 100);
	desconto_inss = salario_bruto * (11.0 / 100);
	desconto_sindicato = salario_bruto * (3.0 / 100);
	
	total_descontos = desconto_ir + desconto_inss + desconto_sindicato;
	salario_liquido = salario_bruto - total_descontos;
	
	printf("\n\n(-) IR(15 %): R$%.2f", desconto_ir);
	printf("\n(-) INSS(11 %): R$%.2f", desconto_inss);
	printf("\n(-) Sindicato(3 %): R$%.2f", desconto_sindicato);
	printf("\nSalário liquído: R$%.2f", salario_liquido);
	return 0;
}
