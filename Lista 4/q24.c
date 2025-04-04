#include <stdio.h>
#include <string.h>
#include <ctype.h>

void main() {
  char nome[100], nomeInvertido[100];
  int valido = 1, i, j;

  printf("Digite seu nome: ");
  fgets(nome, sizeof(nome), stdin);

  for (i = 0; nome[i] != '\0' && nome[i] != '\n'; i++) {
    if (!isalpha(nome[i])) {
      valido = 0;
      break;
    }
  }

  if (!valido) {
    printf("Nome inválido. Apenas letras são permitidas.\n");
    return 1;
  }

  for (j = 0, i = strlen(nome) - 1; i >= 0; i--) {
    if (isalpha(nome[i])) {
      nomeInvertido[j++] = toupper(nome[i]);
    }
  }
  nomeInvertido[j] = '\0';

  printf("Nome invertido: %s\n", nomeInvertido);
}