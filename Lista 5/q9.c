//9. Faça uma função que leia um nome, converta o primeiro caractere deste nome para maiúscula.

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void converter(char nome[]) {
   nome[0] = toupper(nome[0]);
   printf("Nome: %s\n", nome);
}

int main() {
   char nome[99];
   printf("Digite seu nome: ");
   scanf("%s", nome);
   converter(nome);
}