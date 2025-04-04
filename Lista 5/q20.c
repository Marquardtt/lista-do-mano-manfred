#include <stdio.h>
#include <math.h>

void lerCoordenadas(double *x, double *y) {
  printf("Digite a coordenada x: ");
  scanf("%lf", x);
  printf("Digite a coordenada y: ");
  scanf("%lf", y);
}

double calcularDistancia(double x1, double y1, double x2, double y2) {
  return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

void main() {
  double x1, y1, x2, y2;

  printf("Digite as coordenadas do primeiro ponto:\n");
  lerCoordenadas(&x1, &y1);
  printf("Digite as coordenadas do segundo ponto:\n");
  lerCoordenadas(&x2, &y2);
  double distancia = calcularDistancia(x1, y1, x2, y2);
  printf("A distância entre os pontos é: %.2f\n", distancia);
}