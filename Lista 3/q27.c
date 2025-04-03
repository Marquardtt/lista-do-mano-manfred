//27. Faça um programa que peça o número de alunos de uma sala, peça para cada aluno sua idade, altura e sexo.Calcule e imprima
//    a.A maior e a menor altura da turma;
//    b.A média de altura das mulheres;
//    c.A média de altura dos homens;
//    d.A média de idade da turma..

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

void main() {  
	int quantidade_alunos, idade;
	float altura, media_altura_h = 0, media_altura_f = 0, media_idade = 0;
	char sexo;
	float maior_altura = 0, menor_altura = 0;
	int quantidade_f = 0, quantidade_h = 0;

	printf("Quantos alunos: ");
	scanf("%d", &quantidade_alunos);

	for (int i = 0; i < quantidade_alunos; i++)
	{
		printf("\nIdade: ");
		scanf("%d", &idade);
		printf("\nAltura: ");
		scanf("%f", &altura);
		printf("\nSexo (m/f): ");
		scanf(" %c", &sexo, 1);

		media_idade += idade;

		if (i == 0 || altura < menor_altura) {
			menor_altura = altura;
		}
		if (i == 0 || altura > maior_altura) {
			maior_altura = altura;
		}

		switch (sexo)
		{
		case 'f':
			media_altura_f += altura;
			quantidade_f++;
			break;
		case 'm':
			media_altura_h += altura;
			quantidade_h++;
			break;
		default:
			break;
		}
	}

	media_idade = media_idade / quantidade_alunos;
	if (quantidade_h > 0) {
		media_altura_h = media_altura_h / quantidade_h;
	}
	if (quantidade_f > 0) {
		media_altura_f = media_altura_f / quantidade_f;
	}

	printf("\n\nMaior altura: %.2f\n", maior_altura);
	printf("Menor altura: %.2f\n\n", menor_altura);

	printf("Média altura mulheres: %.2f\n", media_altura_f);
	printf("Média altura homens: %.2f\n\n", media_altura_h);
	
	printf("Média idade: %.2f\n\n", media_idade);
}