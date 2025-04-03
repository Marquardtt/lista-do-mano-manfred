//25. Faça um programa que efetue conversões de medidas:
//1 - metros para centímetros
//2 - centímetros para metros
//3 - dias para horas
//4 - horas para dias
//5 - km / h para milhas / h(1, 684)
//6 - milhas / h para km / h
//7 - Celsius para Fahrenheit
//8 - Farenheit para Celsius
//9 - Kg para arroba(15)
//10 - arroba para Kg
//11 - polegada para cm(2, 75)
//12 - cm para polegada
//13 - palmo para centímetros(22)
//14 - centímetros para palmos
//15 - pé para centímetros(33)
//16 - cm para pé
//17 - nó para km / h(1, 852))
//18 - km / h para nós
//19 - côvado para cm(66)
//20 - cm para côvado

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

void main() {
    int opcao;
    float valor, resultado;

    printf("Escolha uma opcao de conversao:\n");
    printf("1 - Metros para centimetros\n");
    printf("2 - Centimetros para metros\n");
    printf("3 - Dias para horas\n");
    printf("4 - Horas para dias\n");
    printf("5 - Km/h para milhas/h\n");
    printf("6 - Milhas/h para km/h\n");
    printf("7 - Celsius para Fahrenheit\n");
    printf("8 - Fahrenheit para Celsius\n");
    printf("9 - Kg para arroba\n");
    printf("10 - Arroba para Kg\n");
    printf("11 - Polegada para cm\n");
    printf("12 - Cm para polegada\n");
    printf("13 - Palmo para centimetros\n");
    printf("14 - Centimetros para palmos\n");
    printf("15 - Pe para centimetros\n");
    printf("16 - Cm para pe\n");
    printf("17 - No para km/h\n");
    printf("18 - Km/h para nos\n");
    printf("19 - Covado para cm\n");
    printf("20 - Cm para covado\n");
    scanf("%d", &opcao);

    printf("Digite o valor a ser convertido:\n");
    scanf("%f", &valor);

    switch (opcao) {
    case 1:
        resultado = valor * 100;
        break;
    case 2:
        resultado = valor / 100;
        break;
    case 3:
        resultado = valor * 24;
        break;
    case 4:
        resultado = valor / 24;
        break;
    case 5:
        resultado = valor / 1.609;
        break;
    case 6:
        resultado = valor * 1.609;
        break;
    case 7:
        resultado = (valor * 9 / 5) + 32;
        break;
    case 8:
        resultado = (valor - 32) * 5 / 9;
        break;
    case 9:
        resultado = valor / 15;
        break;
    case 10:
        resultado = valor * 15;
        break;
    case 11:
        resultado = valor * 2.54;
        break;
    case 12:
        resultado = valor / 2.54;
        break;
    case 13:
        resultado = valor * 22;
        break;
    case 14:
        resultado = valor / 22;
        break;
    case 15:
        resultado = valor * 30.48;
        break;
    case 16:
        resultado = valor / 30.48;
        break;
    case 17:
        resultado = valor * 1.852;
        break;
    case 18:
        resultado = valor / 1.852;
        break;
    case 19:
        resultado = valor * 66;
        break;
    case 20:
        resultado = valor / 66;
        break;
    default:
        printf("Opcao invalida!\n");
        return;
    }

    printf("Resultado da conversao: %.2f\n", resultado);
}