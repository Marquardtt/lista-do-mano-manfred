#include <stdio.h>

void main() {
  int vetor1[10], vetor2[10], vetor3[20];
  int i, j = 0;

  printf("Digite 10 elementos para o primeiro vetor:\n");
  for (i = 0; i < 10; i++) {
    printf("Elemento %d: ", i + 1);
    scanf("%d", &vetor1[i]);
  }

  printf("\nDigite 10 elementos para o segundo vetor:\n");
  for (i = 0; i < 10; i++) {
    printf("Elemento %d: ", i + 1);
    scanf("%d", &vetor2[i]);
  }

  for (i = 0; i < 10; i++) {
    vetor3[j++] = vetor1[i];
    vetor3[j++] = vetor2[i];
  }

  printf("\nVetor intercalado:\n");
  for (i = 0; i < 20; i++) {
    printf("%d ", vetor3[i]);
  }
  printf("\n");

}