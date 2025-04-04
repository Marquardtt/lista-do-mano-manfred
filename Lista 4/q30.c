#include <stdio.h>
#include <string.h>

void main() {
  char nomes[15][50];
  float notas[15], soma = 0, media;
  int i;

  for (i = 0; i < 15; i++) {
    scanf("%s %f", nomes[i], &notas[i]);
    soma += notas[i];
  }

  media = soma / 15;

  for (i = 0; i < 15; i++) {
    if (notas[i] >= media) {
      printf("%s\n", nomes[i]);
    }
  }

}