//7. Fazer um programa que possibilite várias opções de cálculos a partir de um menu.O programa chamará a função correspondente a cada cálculo.
//   [a] S = 1 / 1 + 3 / 2 + 5 / 3 + ........ + 99 / 50
//   [b] S = 1 / 1 - 2 / 2 + 3 / 3 - .......... - 10 / 10
//   [c] S = 1000 / 1 - 997 / 2 + 994 / 3.........
//   [d] S = 480 / 10 - 475 / 11 + 470 / 12 - .......
//   [f] FIM
//   Obs.: Nas opções[c] e[d] fazer os cálculos para os 20 primeiros termos.

#include <stdio.h>
#include <stdlib.h>

void calc_a() {
    double S = 0;
    for (int i = 1, j = 1; j <= 50; i += 2, j++) {
        S += (double)i / j;
    }
    printf("Resultado de S para a opcao [a]: %lf\n", S);
}

void calc_b() {
    double S = 0;
    for (int i = 1; i <= 10; i++) {
        if (i % 2 == 0) {
            S -= (double)i / i;
        } else {
            S += (double)i / i;
        }
    }
    printf("Resultado de S para a opcao [b]: %lf\n", S);
}

void calc_c() {
    double S = 0;
    for (int i = 1000, j = 1; j <= 20; i -= 3, j++) {
        if (j % 2 == 0) {
            S -= (double)i / j;
        } else {
            S += (double)i / j;
        }
    }
    printf("Resultado de S para a opcao [c]: %lf\n", S);
}

void calc_d() {
    double S = 0;
    for (int i = 480, j = 10; j < 30; i -= 5, j++) {
        if (j % 2 == 0) {
            S -= (double)i / j;
        } else {
            S += (double)i / j;
        }
    }
    printf("Resultado de S para a opcao [d]: %lf\n", S);
}

int main() {
    char opcao;
    do {
        printf("Escolha uma opcao de calculo:\n");
        printf("[a] S = 1 / 1 + 3 / 2 + 5 / 3 + ........ + 99 / 50\n");
        printf("[b] S = 1 / 1 - 2 / 2 + 3 / 3 - .......... - 10 / 10\n");
        printf("[c] S = 1000 / 1 - 997 / 2 + 994 / 3.........\n");
        printf("[d] S = 480 / 10 - 475 / 11 + 470 / 12 - .......\n");
        printf("[f] FIM\n");
        printf("Opcao: ");
        scanf(" %c", &opcao, 1);

        switch (opcao) {
            case 'a':
                calc_a();
                break;
            case 'b':
                calc_b();
                break;
            case 'c':
                calc_c();
                break;
            case 'd':
                calc_d();
                break;
            case 'f':
                printf("Fim do programa.\n");
                break;
            default:
                printf("Opcao invalida!\n");
        }
    } while (opcao != 'f');

    return 0;
}