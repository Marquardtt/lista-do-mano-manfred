//17. Uma indústria produz três tipos de peças : parafuso, rosca e porca.Sabendo - se que o preço unitário de cada tipo é
//	  R$ 3, 00, R$ 1, 00 e R$ 0, 50 e que é concedido um desconto de 2 % por parafuso vendido, 2, 5 % por porca vendida e 2, 7 % por rosca vendida, elabore um programa que nos dê a resposta no seguinte formato :
//
//    Cliente: 9999 - xxxxxxxxxxxxxxxxxxxxxxx
//
//    Quant	Produto		Unit.Bruto		 Líquido
//    99	Parafuso		3, 00	999.99		  999.99
//    99	Rosca			1, 00	999.99		  999.99
//    99	Porca			0, 50	999.99		  999.99
//    Total		9999.99

#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
	int quantidade_parafuso, quantidade_rosca, quantidade_porca, quantidade_total;
	float preco_total, preco_total_parafuso, preco_total_porca, preco_total_rosca;
	float preco_parafuso = 3.00, preco_rosca = 1.00, preco_porca = 0.50;
	float desconto_parafuso = (2.0 / 100), desconto_rosca = (2.7 / 100), desconto_porca = (2.5 / 100);

	printf("Quantos parafusos você deseja comprar? ");
	scanf("%d", &quantidade_parafuso);
	printf("Quantas roscas você deseja comprar? ");
	scanf("%d", &quantidade_rosca);
	printf("Quantas porcas você deseja comprar? ");
	scanf("%d", &quantidade_porca);

	quantidade_total = quantidade_parafuso + quantidade_porca + quantidade_rosca;
	preco_total_parafuso = (quantidade_parafuso * preco_parafuso) * (1 - desconto_parafuso);
	preco_total_porca = (quantidade_porca * preco_porca) * (1 - desconto_porca);
	preco_total_rosca = (quantidade_rosca * preco_rosca) * (1 - desconto_rosca);
	preco_total = preco_total_parafuso + preco_total_porca + preco_total_rosca;

	printf("\n\nCliente: 9999 - Gabriel");
	printf("\n| Quant | Produto  | Unit.Bruto | Liquído |");
	printf("\n| %d    ", quantidade_parafuso);
	printf("| Parafuso ");
	printf("| %f   ", preco_parafuso);
	printf("| %.2f    |", preco_total_parafuso);

	printf("\n| %d    ", quantidade_rosca);
	printf("| Rosca ");
	printf("| %f   ", preco_rosca);
	printf("| %.2f    |", preco_total_rosca);

	printf("\n| %d    ", quantidade_porca);
	printf("| Porca");
	printf("| %f   ", preco_porca);
	printf("| %.2f    |", preco_total_porca);
	return 0;
}
