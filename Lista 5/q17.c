#include <stdio.h>

void trocar(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

void ordenarCrescente(int *x, int *y, int *z) {
  if (*x > *y) {
    trocar(x, y);
  }
  if (*x > *z) {
    trocar(x, z);
  }
  if (*y > *z) {
    trocar(y, z);
  }
}

void main() {
  int a, b, c;

  printf("Digite tres numeros: ");
  scanf("%d %d %d", &a, &b, &c);
  ordenarCrescente(&a, &b, &c);
  printf("Numeros em ordem crescente: %d %d %d\n", a, b, c);
}