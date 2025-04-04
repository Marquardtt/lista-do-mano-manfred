#include <stdio.h>
#include <string.h>
#include <ctype.h>

// 5. Faça um programa que leia um vetor de 10 caracteres, e diga quantas consoantes foram lidas. Imprima as consoantes.

void main() {
    char letras[10];
    char consoantes[10];
    int cont_consoantes = 0;

    for (int i = 0; i < 10; i++) {
        printf("Digite 1 letra: ");
        scanf(" %c", &letras[i]);
        letras[i] = tolower(letras[i]); // Convert to lowercase to handle uppercase input
    }

    for (int i = 0; i < 10; i++) {
        if (letras[i] >= 'a' && letras[i] <= 'z' && letras[i] != 'a' && letras[i] != 'e' && letras[i] != 'i' && letras[i] != 'o' && letras[i] != 'u') {
            consoantes[cont_consoantes] = letras[i];
            cont_consoantes++;
        }
    }

    printf("Quantidade de consoantes: %d\n", cont_consoantes);
    printf("Consoantes lidas: ");
    for (int i = 0; i < cont_consoantes; i++) {
        printf("%c ", consoantes[i]);
    }
    printf("\n");
}