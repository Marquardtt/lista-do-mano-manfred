//7. Faça um programa que verifique se uma letra digitada é vogal ou consoante.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main() {
	char vogais[5] = {'A', 'E', 'I', 'O', 'U'};
	char letra;

	printf("Digite uma letra qualquer: ");
	scanf_s("%c", &letra, 1);

	for (int i = 0; i < 5; i++) {
		if (toupper(letra) == vogais[i]) {
			printf("Vogal\n");
			return 0;
		}
		else
		{
			printf("Consoante");
			return 0;
		}
	}
}

