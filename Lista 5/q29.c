#include <stdio.h>

void main() {
  int numero_empregado;
  int dia, mes, ano;
  int hora_inicio, minuto_inicio, segundo_inicio;
  int hora_termino, minuto_termino, segundo_termino;

  while (1) {
    scanf("%d", &numero_empregado);
    if (numero_empregado <= 0) {
      break;
    }

    scanf("%d/%d/%d", &dia, &mes, &ano);
    scanf("%d:%d:%d", &hora_inicio, &minuto_inicio, &segundo_inicio);
    scanf("%d:%d:%d", &hora_termino, &minuto_termino, &segundo_termino);

    printf("Empregado: %d\n", numero_empregado);
    printf("Data: %02d/%02d/%04d\n", dia, mes, ano);
    printf("Inicio: %02d:%02d:%02d\n", hora_inicio, minuto_inicio, segundo_inicio);
    printf("Termino: %02d:%02d:%02d\n", hora_termino, minuto_termino, segundo_termino);
    printf("\n");
  }
}