//17. Faça um programa que peça um número inteiro, calcule e mostre seu fatorial.O usuário deve ter a opção de repetir quantas vezes quiser esta operação.Ex.: 5!= 5 x 4 x 3 x 2 = 120

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int fatorial(int n) {
    if (n == 0) return 1;
    int resultado = 1;
    for (int i = 1; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}

void main() {
    int num;
    char opcao;
    do {
        printf("Digite um numero inteiro: ");
        scanf("%d", &num);
        if (num < 0) {
            printf("Erro, digite um numero inteiro acima de zero\n");
        } else {
            printf("Fatorial de %d = %d\n", num, fatorial(num));
        }
        printf("Deseja calcular outro fatorial? (s/n): ");
        scanf(" %c", &opcao, 1);
    } while (tolower(opcao) == 's');
}