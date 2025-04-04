#include <stdio.h>

void main() {
  int vetor1[10], vetor2[10], vetor3[10], resultado[30];
  int i, j = 0;

  printf("Digite os elementos do vetor 1:\n");
  for (i = 0; i < 10; i++) {
    scanf("%d", &vetor1[i]);
  }

  printf("Digite os elementos do vetor 2:\n");
  for (i = 0; i < 10; i++) {
    scanf("%d", &vetor2[i]);
  }

  printf("Digite os elementos do vetor 3:\n");
  for (i = 0; i < 10; i++) {
    scanf("%d", &vetor3[i]);
  }

  for (i = 0; i < 10; i++) {
    resultado[j++] = vetor1[i];
    resultado[j++] = vetor2[i];
    resultado[j++] = vetor3[i];
  }

  printf("Vetor resultante:\n");
  for (i = 0; i < 30; i++) {
    printf("%d ", resultado[i]);
  }
  printf("\n");

}