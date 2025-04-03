//3. Faça um programa que leia um vetor de 10 números reais e mostre - os na ordem inversa.
#include <stdio.h>  
#include <stdlib.h>  

void main() {
    int vet[10];
    for (int i = 0; i < 10; i++) {
        printf("Digite o %dº numero: ", i + 1);
        scanf("%d", &vet[i]);
    }

    printf("Números na ordem inversa:\n");
    for (int i = 9; i >= 0; i--) {
        printf("%d\n", vet[i]);
    }
}