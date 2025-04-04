#include <stdio.h>
#include <math.h>

double potencia(double base, double expoente) {
  return pow(base, expoente);
}

void mostrarResultado(double resultado) {
  printf("Resultado: %.2f\n", resultado);
}

void main() {
  double base, expoente, resultado;

  printf("Digite a base: ");
  scanf("%lf", &base);
  printf("Digite o expoente: ");
  scanf("%lf", &expoente);
  resultado = potencia(base, expoente);
  mostrarResultado(resultado);
}