//30. Faça um programa para calcular o seu “Número da Sorte”.A entrada do programa é um nome(completo, sem espaços entre as palavras).A saída é um número inteiro, calculado da seguinte forma :
//	  Para cada letra do nome, se determina um número de ordem correspondente no alfabeto : a letra A corresponde a 1, a letra B corresponde a 2, e assim por diante.Estes números são somados e a soma resultante é dividida por 9. O resto desta divisão é o
#include <stdio.h>  
#include <stdlib.h>  

void main() {  
char nome[100];
int soma = 0, i = 0, numeroDaSorte;

printf("Digite seu nome completo: ");
scanf("%s", nome);

while (nome[i] != '\0') {
    soma += (nome[i] - 'A' + 1);
    i++;
}

numeroDaSorte = soma % 9;

printf("Seu Numero da Sorte e: %d\n", numeroDaSorte);
}