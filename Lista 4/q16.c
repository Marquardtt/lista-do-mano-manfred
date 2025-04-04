#include <stdio.h>
#include <math.h>

void main() {
  int vetor[20];
  int i;
  int S = 0;

  printf("Digite 20 elementos do vetor:\n");
  for (i = 0; i < 20; i++) {
    printf("Elemento %d: ", i + 1);
    scanf("%d", &vetor[i]);
  }

  for (i = 0; i < 10; i++) {
    S += pow((vetor[i] - vetor[19 - i]), 2);
    if (i < 9) {
      S -= pow((vetor[i + 1] - vetor[18 - i]), 2);
    }
  }

  printf("O valor de S é: %d\n", S);

}