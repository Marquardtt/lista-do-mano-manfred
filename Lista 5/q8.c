//8. Faça uma função que receba como argumento os valores dos lados de um triângulo, a função deverá retornar 0 se triângulo for equilátero, 1 se for isósceles ou 2 se for escaleno.

#include <stdio.h>
#include <stdlib.h>

int tipoTriangulo(int a, int b, int c) {
    if (a == b && b == c) {
        return 0; 
    } else if (a == b || b == c || a == c) {
        return 1; 
    } else {
        return 2; 
    }
}

int main() {
    int a, b, c;
    printf("Digite os valores dos lados do triangulo: ");
    scanf("%d %d %d", &a, &b, &c);

    int tipo = tipoTriangulo(a, b, c);
    if (tipo == 0) {
        printf("equilatero.\n");
    } else if (tipo == 1) {
        printf("isosceles.\n");
    } else {
        printf("escaleno.\n");
    }

    return 0;
}