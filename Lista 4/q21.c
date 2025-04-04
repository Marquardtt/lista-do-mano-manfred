#include <stdio.h>

void main() {
  int A[10], B[10], C[10], D[10];

  printf("Enter 10 values for vector A:\n");
  for (int i = 0; i < 10; i++) {
    scanf("%d", &A[i]);
  }

  printf("Enter 10 values for vector B:\n");
  for (int i = 0; i < 10; i++) {
    scanf("%d", &B[i]);
  }

  for (int i = 0; i < 10; i++) {
    C[i] = A[i] * A[i];
    D[i] = A[i] * B[i];
  }

  printf("\nVector C (A[i] squared):\n");
  for (int i = 0; i < 10; i++) {
    printf("C[%d] = %d\n", i, C[i]);
  }

  printf("\nVector D (A[i] * B[i]):\n");
  for (int i = 0; i < 10; i++) {
    printf("D[%d] = %d\n", i, D[i]);
  }

}