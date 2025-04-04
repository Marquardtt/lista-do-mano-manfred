#include <stdio.h>

void validarEntrada(int *num) {
  while (*num <= 0) {
    printf("Entrada inválida. Por favor, insira um número maior que 0: ");
    scanf("%d", num);
  }
}

int calcularFatorial(int num) {
  int fatorial = 1;
  for (int i = 1; i <= num; i++) {
    fatorial *= i;
  }
  return fatorial;
}

void main() {
  int numero;

  printf("Digite um número para calcular seu fatorial: ");
  scanf("%d", &numero);
  validarEntrada(&numero);
  int resultado = calcularFatorial(numero);
  printf("O fatorial de %d é %d.\n", numero, resultado);
}