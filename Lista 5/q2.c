//2. Escreva uma função que receba como argumento o ano e retorne 1 se for ano bissexto ou 0 se não for um ano bissexto.

#include <stdio.h>  
#include <stdlib.h>  

int bissexto(int ano) {
    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
        return 1;
    } else {
        return 0;
    }
}

void main() {
    int ano;
    printf("Digite um ano: ");
    scanf("%d", &ano);
    if (bissexto(ano)) {
        printf("%d é um ano bissexto.\n", ano);
    } else {
        printf("%d não é um ano bissexto.\n", ano);
    }
}