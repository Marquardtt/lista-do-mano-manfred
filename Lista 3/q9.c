//9. Faça um programa que calcule e mostre a soma dos números pares entre 100 e 200 (inclusive). 
//   O usuário deve ter a opção de repetir quantas vezes quiser esta operação.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

void main() {
    char repetir;

    do {
        int soma = 0;

        for (int i = 100; i <= 200; i++) {
            if (i % 2 == 0) {
                soma += i;
            }
        }

        printf("A soma dos números pares entre 100 e 200 é: %d\n", soma);

        printf("Deseja repetir a operação? (s/n): ");
        scanf(" %c", &repetir);
    } while (repetir == 's' || repetir == 'S');
}