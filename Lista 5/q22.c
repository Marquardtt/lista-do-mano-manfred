#include <stdio.h>

void gerarFibonacci(int quantidade) {
  int primeiro = 0, segundo = 1, proximo;

  printf("Sequência de Fibonacci:\n");
  for (int i = 0; i < quantidade; i++) {
    if (i <= 1) {
      proximo = i;
    } else {
      proximo = primeiro + segundo;
      primeiro = segundo;
      segundo = proximo;
    }
    printf("%d ", proximo);
  }
  printf("\n");
}

void main() {
  int quantidade;

  printf("Digite a quantidade de números da sequência de Fibonacci que deseja: ");
  scanf("%d", &quantidade);

  if (quantidade <= 0) {
    printf("Por favor, insira um número inteiro positivo.\n");
  } else {
    gerarFibonacci(quantidade);
  }
}