#include <stdio.h>

float produtos[10];

void lerPrecos() {
  for (int i = 0; i < 10; i++) {
    printf("Digite o preco do produto %d: ", i + 1);
    scanf("%f", &produtos[i]);
  }
}

void ordenarPrecos() {
  for (int i = 0; i < 9; i++) {
    for (int j = i + 1; j < 10; j++) {
      if (produtos[i] > produtos[j]) {
        float temp = produtos[i];
        produtos[i] = produtos[j];
        produtos[j] = temp;
      }
    }
  }
}

void mostrarPrecos() {
  printf("Precos ordenados:\n");
  for (int i = 0; i < 10; i++) {
    printf("%.2f\n", produtos[i]);
  }
}

void main() {
  lerPrecos();
  ordenarPrecos();
  mostrarPrecos();
}