//16. Faça um programa para controle de temperatura de um forno que derrete alumínio.
//    O programa deverá perguntar qual temperatura que o alumínio deverá ser trabalhado e operar nas seguintes condições:
//    a. Se temperatura for inferior ou igual 500o C enviar uma mensagem para tela "Temperatura Inválida";
//    b. Se temperatura for menor do que 700o C enviar uma mensagem para tela "Aquecimento Ligado em 100%";
//    c. Se temperatura for menor do que 735o C enviar uma mensagem para tela "Aquecimento Ligado em 50%";
//    d. Se temperatura for maior ou igual 735o C enviar uma mensagem para tela "Aquecimento Desligado";
//    e. Se temperatura for maior do que 780o C enviar uma mensagem para tela "SUPERAQUECIMENTO";
//    f. Os valores digitados devem ser inteiros e inferiores de 1000.

#include <string.h>
#include <math.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

void main() {
    int temperatura;

    printf("temperatura: ");
    scanf("%d", &temperatura);

    if (temperatura >= 1000) {
        printf("Temperatura inválida! Deve ser inferior a 1000.\n");
    } else if (temperatura <= 500) {
        printf("Temperatura Inválida\n");
    } else if (temperatura < 700) {
        printf("Aquecimento Ligado em 100%%\n");
    } else if (temperatura < 735) {
        printf("Aquecimento Ligado em 50%%\n");
    } else if (temperatura <= 780) {
        printf("Aquecimento Desligado\n");
    } else {
        printf("SUPERAQUECIMENTO\n");
    }
}