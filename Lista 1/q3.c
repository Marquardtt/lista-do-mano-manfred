//3. Construa um algoritmo que calcule a área de um círculo 

#include <stdio.h>

int main()
{
	float raio, area;
	printf("Digite o raio do círculo: ");
	scanf("%f", &raio);
	area = 3.14 * raio * raio;
	printf("A área do círculo é: %.2f\n", area);
	return 0;
}