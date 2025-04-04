//15. Faça um programa que peca a hora atual(da região) e peça o código de uma determinada localidade e então passe a hora e o código para uma função que retorna a hora naquela localidade.Os códigos seguem abaixo :
//1 - Rio de Janeiro = > 0 (zero)
//2 - Buenos Aires = > 0 (Zero)
//3 - Londres = > +3
//4 – Roma = > +4
//5 - Cairo = > +5
//6 - Moscou = > +6
//7 - Chicago = > -3
//8 - México = > -3
//9 - Nova Iorque = > -2
//10 - Iugoslávia = > -2
//11 - Cuiabá = > -1
//12 - Ilhas São Pedro = > +1

#include <stdio.h>
#include <stdlib.h>

int calcularHoraLocal(int horaAtual, int codigoLocalidade) {
int diferencaHoras[] = {0, 0, 3, 4, 5, 6, -3, -3, -2, -2, -1, 1};
return (horaAtual + diferencaHoras[codigoLocalidade - 1] + 24) % 24;
}

void main() {
int horaAtual, codigoLocalidade, horaLocal;

printf("Digite a hora atual (0-23): ");
scanf("%d", &horaAtual);

printf("Digite o código da localidade (1-12): ");
scanf("%d", &codigoLocalidade);

if (horaAtual < 0 || horaAtual > 23 || codigoLocalidade < 1 || codigoLocalidade > 12) {
    printf("Entrada inválida.\n");
    return;
}

horaLocal = calcularHoraLocal(horaAtual, codigoLocalidade);
printf("A hora na localidade escolhida é: %d\n", horaLocal);
}