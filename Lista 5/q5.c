//5. Faça um programa que tenha um menu de conversão de R$ para US$ e U$ para R$, cada conversão devera ter uma função que receba o valor e retorne o valor convertido

#include <stdio.h>  
#include <stdlib.h>  

converter(int opcao, float valor) {
	float v_dolar = 5.63, v_real = 0.18;
	switch (opcao){
	case 1:
		return printf("U$%.2f", valor * v_dolar);
		break;
	case 2:
		return printf("R$%.2f", valor * v_real);
		break;
	default:
		return printf("Erro");
	}
}

int main() {
	int opcao;
	float valor;
	printf("Escolha uma opção (1 - R$ para U$ / 2 - U$ para R$: ");
	scanf("%d", &opcao);
	printf("Valor para converter: ");
	scanf("%f", &valor);
	converter(opcao, valor);
}