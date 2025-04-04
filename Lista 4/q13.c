#include <stdio.h>

void main() {
    int numeros[20], pares[20], impares[20];
    int i, countPar = 0, countImpar = 0;

    printf("digite %d numeros inteiros:\n", 20);
    for (i = 0; i < 20; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &numeros[i]);

        if (numeros[i] % 2 == 0) {
            pares[countPar++] = numeros[i];
        } else {
            impares[countImpar++] = numeros[i];
        }
    }

    printf("\nvetor original:\n");
    for (i = 0; i < 20; i++) {
        printf("%d ", numeros[i]);
    }

    printf("\n\nvetor de números pares:\n");
    for (i = 0; i < countPar; i++) {
        printf("%d ", pares[i]);
    }

    printf("\n\nvetor de números impares:\n");
    for (i = 0; i < countImpar; i++) {
        printf("%d ", impares[i]);
    }

    printf("\n");
}