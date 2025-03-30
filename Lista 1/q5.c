//5. Construa um algoritmo que peça um número com 5 casas decimais e arredonde para duas.  

#include <stdio.h>
#include <string.h>
#include <math.h>

void main()
{
	char num[15];
	int casas = 0;
	char* p;
	do {
		printf("Digite um número com 5 casas decimais: ");
		scanf("%s", num);
		p = strchr(num, '.');
		casas = (p != NULL) ? (int)strlen(p + 1) : 0;
	} while (casas != 5);
	printf("Número arredondado %.2f",(atof(num) * 100) / 100);
	return;
}