#include <stdio.h>
#include <string.h>

void main() {
  int gabarito[12];
  char nomes[100][50];
  int respostas[100][12];
  int num_alunos, acertos[100];

  for (int i = 0; i < 12; i++) {
    scanf("%d", &gabarito[i]);
  }

  scanf("%d", &num_alunos);

  for (int i = 0; i < num_alunos; i++) {
    scanf("%s", nomes[i]);
    for (int j = 0; j < 12; j++) {
      scanf("%d", &respostas[i][j]);
    }
  }

  for (int i = 0; i < num_alunos; i++) {
    acertos[i] = 0;
    for (int j = 0; j < 12; j++) {
      if (respostas[i][j] == gabarito[j]) {
        acertos[i]++;
      }
    }
  }

  for (int i = 0; i < num_alunos; i++) {
    printf("%s %d\n", nomes[i], acertos[i]);
  }

}