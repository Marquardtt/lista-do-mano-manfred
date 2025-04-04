#include <stdio.h>

void converter_tempo(int segundos, int *horas, int *minutos, int *seg_restantes) {
  *horas = segundos / 3600;
  segundos %= 3600;
  *minutos = segundos / 60;
  *seg_restantes = segundos % 60;
}

void main() {
  int segundos, horas, minutos, seg_restantes;

  printf("Digite o tempo em segundos: ");
  scanf("%d", &segundos);
  converter_tempo(segundos, &horas, &minutos, &seg_restantes);
  printf("%d segundos equivalem a %d horas, %d minutos e %d segundos.\n", segundos, horas, minutos, seg_restantes);
}