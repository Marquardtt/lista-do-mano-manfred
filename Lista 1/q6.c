//6. Construa um algoritmo que calcule a área de um quadrado, em seguida mostre o dobro desta área para o usuário. 

#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
	float lado;
	printf("Digite o tamanho de um dos lados do quadrado: ");
	scanf("%f", &lado);
	printf("A area do quadradro multiplicada por 2 é %f", pow(lado, 2) * 2);
}