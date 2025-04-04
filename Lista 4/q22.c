#include <stdio.h>
#include <string.h>

void main() {
  char vetor[100];

  printf("Digite uma string: ");
  fgets(vetor, sizeof(vetor), stdin);

  size_t tamanho = strlen(vetor);
  if (vetor[tamanho - 1] == '\n') {
    vetor[tamanho - 1] = '\0';
    tamanho--;
  }

  printf("O vetor possui %zu elementos.\n", tamanho);

}