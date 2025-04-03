//20. Faça um programa que peça um número qualquer e que calcule a tabuada deste número; mostre a tabuada na ordem inversa(10, 9, 8 ...).O usuário pode repetir a operação quantas vezes quiser.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

void main() {
    int num;
    char opcao;

    do {
        printf("Digite um numero: ");
        scanf("%d", &num);
        for (int i = 10; i > 0 ; i--){
            printf("%d x %d = %d\n", num, i, num * i);
        }
        printf("Deseja continuar calculando? (s=sim, n=nao): ");
        scanf(" %c", &opcao, 1);
    } while (opcao == 's');
}