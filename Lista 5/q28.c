#include <stdio.h>

float massa_inicial, massa_final;
int tempo;

void ler_dados() {
  printf("Digite a massa inicial (em gramas): ");
  scanf("%f", &massa_inicial);
}

void calcular() {
  massa_final = massa_inicial;
  tempo = 0;
  while (massa_final >= 0.5) {
    massa_final /= 2;
    tempo += 50;
  }
}

void mostrar_resultados() {
  printf("Massa inicial: %.2f g\n", massa_inicial);
  printf("Massa final: %.2f g\n", massa_final);
  printf("Tempo necessário: %d segundos\n", tempo);
}

void main() {
  ler_dados();
  calcular();
  mostrar_resultados();
}