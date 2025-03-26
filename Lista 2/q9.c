//9. Faça um programa que peça três notas de um aluno e calcule a média.Analisar a média e imprimir uma das mensagens a seguir :
//	 a.A mensagem "Aprovado", se a média for maior ou igual a 7, com a respectiva média alcançada;
//	 b.A mensagem "Reprovado", se a média for menor do que 7, com a respectiva média alcançada;
//	 c.A mensagem "Aprovado com Distinção", se a média for igual a 10.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main() {
	float nota, soma = 0, media;
	for (int i = 1; i <= 3; i++) {
		printf("Digite a nota número %d", i);
		scanf("%f", &nota);
		soma += nota;
	}

	media = soma / 3;

	if (media < 7) {
		printf("Reprovado");
	}
	else if (media >= 7) {
		printf("Aprovado");
	}
	else {
		printf("Aprovado com Distinção");
	}
	return 0;
}
