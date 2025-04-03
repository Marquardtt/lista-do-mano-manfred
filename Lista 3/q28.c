//28. Um vendedor recebe uma comissão mensal, além do seu salário, de acordo com o valor da venda que efetuou no mês.Se o valor da venda for igual ou superior a R$ 100.000, 00 a sua comissão será de 10 % sobre o valor da venda, caso contrário, será de apenas 6 % .  
//	  Conhecemos o código do vendedor, o salário fixo e o valor da venda por ele efetuada no mês.Faça um programa que imprima o código, salário total e valor em R$ da comissão.O programa deve permitir várias transações.  

#include <stdio.h>  
#include <stdlib.h>  

void calcularComissao(int codigo, float salarioFixo, float valorVenda) {  
   float comissao, salarioTotal;  
   if (valorVenda >= 100000.00) {  
       comissao = valorVenda * 0.10;  
   } else {  
       comissao = valorVenda * 0.06;  
   }  
   salarioTotal = salarioFixo + comissao;  
   printf("Codigo do vendedor: %d\n", codigo);  
   printf("Salario total: R$ %.2f\n", salarioTotal);  
   printf("Valor da comissao: R$ %.2f\n", comissao);  
}  

void main() {  
   int codigo;  
   float salarioFixo, valorVenda;  
   char continuar;  

   do {  
       printf("Digite o codigo do vendedor: ");  
       scanf("%d", &codigo);  
       printf("Digite o salario fixo do vendedor: ");  
       scanf("%f", &salarioFixo);  
       printf("Digite o valor da venda efetuada pelo vendedor: ");  
       scanf("%f", &valorVenda);  

       calcularComissao(codigo, salarioFixo, valorVenda);  

       printf("Deseja realizar outra transacao? (S/N): ");  
       scanf(" %c", &continuar);  
   } while (toupper(continuar) == 'S');  
}