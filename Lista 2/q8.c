//8 .Faça um programa que leia 3 valores inteiros e exiba - os em ordem crescente.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main() {
	int num_1, num_2, num_3;
	printf("Digite 3 valores inteiros: ");
	scanf("%d %d %d", &num_1, &num_2, &num_3);
	if (num_1 < num_2 && num_1 < num_3) {
		if (num_2 < num_3) {
			printf("%d %d %d\n", num_1, num_2, num_3);
		}
		else {
			printf("%d %d %d\n", num_1, num_3, num_2);
		}
	}
	else if (num_2 < num_1 && num_2 < num_3) {
		if (num_1 < num_3) {
			printf("%d %d %d\n", num_2, num_1, num_3);
		}
		else {
			printf("%d %d %d\n", num_2, num_3, num_1);
		}
	}
	else {
		if (num_1 < num_2) {
			printf("%d %d %d\n", num_3, num_1, num_2);
		}
		else {
			printf("%d %d %d\n", num_3, num_2, num_1);
		}
	}
	return 0;
}
