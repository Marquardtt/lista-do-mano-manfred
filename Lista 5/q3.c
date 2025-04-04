//3. Faça uma função que desenhe linhas de caracteres na tela, a função receberá como argumento o tipo de caractere e o número de linhas que deverá imprimir.

#include <stdio.h>  
#include <stdlib.h>  

char desenha(char caracter, int num_linhas) {
	for (int i = 0; i <= num_linhas; i++) {
		printf("%c\n", caracter);
	}
}

void main() {
	char caracter;
	int num_linhas;
	printf("Digite o caracter: ");
	scanf("%c", &caracter, 1);
	printf("Digite o numero de linhas: ");
	scanf("%d", &num_linhas);
	desenha(caracter, num_linhas);
}