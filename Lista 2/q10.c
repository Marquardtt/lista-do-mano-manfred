//10. Faça um programa que leia a idade de quatro alunos e apresente a mensagem conforme instruções: 
//    a.Se a média de idade dos alunos é inferior de 25, apresentar a mensagem "Turma Jovem";
//	  b.Se a média de idade dos alunos é entre 25 e 40, apresentar a mensagem "Turma Adulta";
//	  c.Se a média de idade dos alunos é acima de 40 anos, apresentar a mensagem "Turma Idosa".

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main() {
	float idade, soma = 0, media;
	for (int i = 1; i <= 4; i++) {
		printf("Digite a idade do %dº aluno: ", i);
		scanf("%f", &idade);
		soma += idade;
	}

	media = soma / 3;

	if (media < 25) {
		printf("Turma Jovem");
	}
	else if (media >= 25 && media <= 40) {
		printf("Turma Adulta");
	}
	else {
		printf("Turma Idosa");
	}
	return 0;
}
