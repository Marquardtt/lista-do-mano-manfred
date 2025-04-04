#include <stdio.h>
#include <stdbool.h>

bool isInArray(int element, int array[], int size) {
  for (int i = 0; i < size; i++) {
    if (array[i] == element) {
      return true;
    }
  }
  return false;
}

void main() {
  int A[5], B[10], C[5 + 10], D[5];
  int sizeC = 0, sizeD = 0;

  printf("Digite os elementos do vetor A[%d]:\n", 5);
  for (int i = 0; i < 5; i++) {
    scanf("%d", &A[i]);
  }

  printf("Digite os elementos do vetor B[%d]:\n", 10);
  for (int i = 0; i < 10; i++) {
    scanf("%d", &B[i]);
  }

  for (int i = 0; i < 5; i++) {
    C[sizeC++] = A[i];
  }
  for (int i = 0; i < 10; i++) {
    C[sizeC++] = B[i];
  }

  for (int i = 0; i < 5; i++) {
    if (!isInArray(A[i], B, 10)) {
      D[sizeD++] = A[i];
    }
  }

  printf("\nVetor C (união de A e B):\n");
  for (int i = 0; i < sizeC; i++) {
    printf("%d ", C[i]);
  }
  printf("\n");

  printf("\nVetor D (elementos de A que não estão em B):\n");
  for (int i = 0; i < sizeD; i++) {
    printf("%d ", D[i]);
  }
  printf("\n");

}