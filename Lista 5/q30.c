#include <stdio.h>

void converter_tempo(int segundos, int *horas, int *minutos, int *seg_restantes) {
  *horas = segundos / 3600;
  segundos %= 3600;
  *minutos = segundos / 60;
  *seg_restantes = segundos % 60;
}

int ler_dados(int *numero, int *dia, int *mes, int *ano,
              int *h_inicio, int *m_inicio, int *s_inicio,
              int *h_fim, int *m_fim, int *s_fim) {
  scanf("%d", numero);
  if (*numero <= 0) return 0;

  scanf("%d/%d/%d", dia, mes, ano);
  scanf("%d:%d:%d", h_inicio, m_inicio, s_inicio);
  scanf("%d:%d:%d", h_fim, m_fim, s_fim);

  return 1;
}

int calcular_duracao(int h_inicio, int m_inicio, int s_inicio,
                     int h_fim, int m_fim, int s_fim) {
  int inicio_segundos = h_inicio * 3600 + m_inicio * 60 + s_inicio;
  int fim_segundos = h_fim * 3600 + m_fim * 60 + s_fim;
  return fim_segundos - inicio_segundos;
}

void imprimir_duracao(int numero, int horas, int minutos, int segundos) {
  printf("Empregado: %d\n", numero);
  printf("Duracao da tarefa: %d horas, %d minutos e %d segundos\n\n", horas, minutos, segundos);
}

void main() {
  int numero, dia, mes, ano;
  int h_inicio, m_inicio, s_inicio;
  int h_fim, m_fim, s_fim;

  while (ler_dados(&numero, &dia, &mes, &ano,
                   &h_inicio, &m_inicio, &s_inicio,
                   &h_fim, &m_fim, &s_fim)) {

    int duracao = calcular_duracao(h_inicio, m_inicio, s_inicio,
                                   h_fim, m_fim, s_fim);

    int horas, minutos, segundos;
    converter_tempo(duracao, &horas, &minutos, &segundos);

    imprimir_duracao(numero, horas, minutos, segundos);
  }

}