#include <stdio.h>

struct Data {
  int dia;
  int mes;
  int ano;
};

int ehAnoBissexto(int ano) {
  return (ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0);
}

int diasNoMes(int mes, int ano) {
  switch (mes) {
    case 4: case 6: case 9: case 11:
      return 30;
    case 2:
      return ehAnoBissexto(ano) ? 29 : 28;
    default:
      return 31;
  }
}

void adicionarDias(struct Data *data, int diasParaAdicionar) {
  data->dia += diasParaAdicionar;

  while (data->dia > diasNoMes(data->mes, data->ano)) {
    data->dia -= diasNoMes(data->mes, data->ano);
    data->mes++;

    if (data->mes > 12) {
      data->mes = 1;
      data->ano++;
    }
  }
}

void main() {
  struct Data data;

  printf("Digite uma data (dd mm aaaa): ");
  scanf("%d %d %d", &data.dia, &data.mes, &data.ano);
  adicionarDias(&data, 5);
  printf("Nova data após adicionar 5 dias: %02d/%02d/%04d\n", data.dia, data.mes, data.ano);
}