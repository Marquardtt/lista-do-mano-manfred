#include <stdio.h>

int converterParaSegundos(int horas, int minutos, int segundos) {
    return (horas * 3600) + (minutos * 60) + segundos;
}

void main() {
    int horas, minutos, segundos;
    printf("Digite o tempo (hh mm ss): ");
    scanf("%d %d %d", &horas, &minutos, &segundos);
    printf("O tempo em segundos é: %d\n", converterParaSegundos(horas, minutos, segundos));
}