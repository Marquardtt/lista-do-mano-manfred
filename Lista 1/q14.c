//13. Uma determinada empresa vende uma máquina que possui seis motores. Um de 20 CV, dois de 1 CV, e três de 5 CV, que custam 1500, 300 e 600 reais respectivamente cada motor. 
//	  Existe a necessidade de saber quantos motores deverão ser comprados de cada modelo e quanto custará esta compra. Para isto elabore um programa que:  
//	  a. Pergunte quantas máquinas serão vendidas;
//	  b. Calcule e apresente na tela a quantidade de motores que deverão ser comprados de cada modelo;
//	  c. Calcule e apresente na tela o custo total por máquina, o custo por tipo de motor e o custo total da compra.

#include <stdio.h>
#include <string.h>
#include <math.h>

void main()
{
	int quantidade_maquinas, motor_20cv = 1, motor_1cv = 2, motor_5cv = 3;
	float valor_motor_20cv = 1500, valor_motor_1cv = 300, valor_motor_5cv = 600, preco_maquina, preco_total, preco_total_motor20cv, preco_total_motor5cv, preco_total_motor1cv;

	printf("Digite a quantidade de maquinas a serem compradas: ");
	scanf("%d", &quantidade_maquinas);

	preco_total_motor20cv = quantidade_maquinas * (motor_20cv * valor_motor_20cv);
	preco_total_motor5cv = quantidade_maquinas * (motor_5cv * valor_motor_5cv);
	preco_total_motor1cv = quantidade_maquinas * (motor_1cv * valor_motor_1cv);

	preco_maquina = preco_total_motor20cv + preco_total_motor5cv + preco_total_motor1cv;
	preco_total = quantidade_maquinas * preco_maquina;
	
	printf("\n======================================");
	printf("\nQuantidade de motores comprados");
	printf("\nSerão comprados: %d motores de 20 CV", quantidade_maquinas * motor_20cv);
	printf("\nSerão comprados: %d motores de 1 CV", quantidade_maquinas * motor_1cv);
	printf("\nSerão comprados: %d motores de 5 CV", quantidade_maquinas * motor_5cv);
	printf("\n======================================");

	printf("\n\n======================================");
	printf("\nInformações gerais");
	printf("\nCusto total da compra: %.2f", preco_total);
	printf("\nCusto total por máquina: %.2f", preco_maquina);
	printf("\n======================================");

	printf("\n\n======================================");
	printf("\nCusto por tipo de motor");
	printf("\n20CV: %.2f: ", preco_total_motor20cv);
	printf("\n5CV: %.2f: ", preco_total_motor5cv);
	printf("\n1CV: %.2f: ", preco_total_motor1cv);
	printf("\n======================================\n\n\n");

	return;
}