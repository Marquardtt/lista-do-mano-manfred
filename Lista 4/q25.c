#include <stdio.h>
#include <string.h>

void main() {
  char nomes[50][100];
  char nomeProcurado[100];
  int encontrado = 0;

  for (int i = 0; i < 50; i++) {
    scanf(" %[^\n]", nomes[i]);
  }

  scanf(" %[^\n]", nomeProcurado);

  for (int i = 0; i < 50; i++) {
    if (strcmp(nomes[i], nomeProcurado) == 0) {
      printf("Posicao: %d\nNome: %s\n", i, nomes[i]);
      encontrado = 1;
      break;
    }
  }

  if (!encontrado) {
    printf("Nome nao encontrado\n");
  }

}