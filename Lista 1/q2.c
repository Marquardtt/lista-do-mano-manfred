//2. Construa um que peça um número e então mostre a mensagem “O número informado foi  [número]“ 

#include <stdio.h>

void main() 
{
	int num;
	printf("Digite um número: ");
	scanf("%d", &num);
	printf("O número digitado foi %d", num);
	return;
}
