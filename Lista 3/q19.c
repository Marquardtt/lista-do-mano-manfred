//19. Faça um programa que mostre todos os primos entre 1 e N, sendo N um número inteiro fornecido pelo usuário.O programa deverá mostrar também o número de divisões que ele executou para encontrar os números primos

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int num_primo(int num, int* div_cont) {
    if (num <= 1) return 0;
    for (int i = 2; i <= sqrt(num); i++) {
        (*div_cont)++;
        if (num % i == 0) return 0;
    }
    return 1;
}

void main() {
    int num, div_count = 0, total_div_count = 0;
    printf("Numero: ");
    scanf("%d", &num);

    printf("Primos entre 1 e %d:\n", num);
    for (int i = 2; i <= num; i++) {
        if (num_primo(i, &div_count)) {
            printf("%d ", i);
        }
        total_div_count += div_count;
        div_count = 0;
    }
    printf("\nNumero de divisoes: %d\n", total_div_count);
}