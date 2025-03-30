//18. Faça um programa que calcule uma equação do 2o. grau, na forma x2+bx+c. 
//    O programa deve fazer todas as consistências de dados e informar caso o usuário entre com dados errados. 
//    Deve ainda informar se o delta é positivo ou negativo, e os valores de X quando existirem

#include <string.h>
#include <math.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>


int main() {
    float a, b, c, delta, x1, x2;

    printf("Digite o valor de a (coeficiente de x^2): ");
    scanf("%f", &a);

    if (a == 0) {
        printf("O valor de 'a' deve ser diferente de 0 para ser uma equação do 2º grau.\n");
        return 1;
    }

    printf("Digite o valor de b (coeficiente de x): ");
    scanf("%f", &b);

    printf("Digite o valor de c (termo constante): ");
    scanf("%f", &c);

    delta = b * b - 4 * a * c;

    printf("Delta = %.2f\n", delta);

    if (delta < 0) {
        printf("Delta é negativo. A equação não possui raízes reais.\n");
    } else if (delta == 0) {
        x1 = -b / (2 * a);
        printf("Delta é zero. A equação possui uma única raiz real: x = %.2f\n", x1);
    } else {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("Delta é positivo. A equação possui duas raízes reais:\n");
        printf("x1 = %.2f\n", x1);
        printf("x2 = %.2f\n", x2);
    }

    return 0;
}