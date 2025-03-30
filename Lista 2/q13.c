//13. Faça um programa que pergunte em que turno você estuda. Peça para digitar M-matutino ou V-Vespertino ou N-Noturno. 
//    Imprima a mensagem Bom Dia!, Boa Tarde! ou Boa Noite! ou Valor Inválido!, conforme o caso.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

void main(){
    char turno;
    printf("Em que turno voce trabalha: ");
    printf("\nN - Noturno");
    printf("\nV - Vespertino");
    printf("\nM - Matutino\n");
    scanf("%c", &turno);

    switch (turno)
    {
    case 'N':
        printf("Boa Noite!");
        break;
    case 'V':
        printf("Boa Tarde!");
        break;
    case 'M':
        printf("Bom Dia!");
        break;
    default:
        printf("Valor Inválido!");
        break;
    }
}