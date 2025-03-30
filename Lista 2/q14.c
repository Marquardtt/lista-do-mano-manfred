//14. Faça um programa que leia um número e exiba o dia correspondente da semana. 
//    (1-Domingo, 2- Segunda,etc.), se digitar outro valor deve aparecer valor inválido.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

void main(){
    int dia;
    printf("Digite o dia da semana: \n");
    scanf("%d", &dia);
    switch (dia)
    {
    case 1:
        printf("Domingo");
        break;
    case 2:
        printf("SEgunda");
        break;
    case 3:
        printf("terça");
        break;
    case 4:
        printf("quarta");
        break;
    case 5:
        printf("quinta");
        break;
    case 6:
        printf("SExta");
        break;
    case 7:
        printf("sabado");
        break;
    default:
    printf("valor invalido");
        break;
    }

}