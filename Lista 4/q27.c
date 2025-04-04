#include <stdio.h>

void main() {
  int codigos[30];
  float precos[30];
  int i, j, tempCodigo;
  float tempPreco;

  for (i = 0; i < 30; i++) {
    scanf("%d %f", &codigos[i], &precos[i]);
  }

  for (i = 0; i < 30 - 1; i++) {
    for (j = i + 1; j < 30; j++) {
      if (precos[i] < precos[j]) {
        tempPreco = precos[i];
        precos[i] = precos[j];
        precos[j] = tempPreco;

        tempCodigo = codigos[i];
        codigos[i] = codigos[j];
        codigos[j] = tempCodigo;
      }
    }
  }

  for (i = 0; i < 3; i++) {
    printf("Codigo: %d, Preco: %.2f\n", codigos[i], precos[i]);
  }

}