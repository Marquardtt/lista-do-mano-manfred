//5. Faça um programa que peça um número e informe se o número é inteiro ou quebrado

#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
	float num;
	printf("Digite um número: ");
	scanf("%f", &num);
	if (num == (int)num) {
		printf("O número é inteiro\n");
	}
	else {
		printf("O número é quebrado\n");
	}
	return 0;
}

