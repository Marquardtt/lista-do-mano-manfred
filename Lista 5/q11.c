//11. Faça uma função que calcule a média de uma seqüência de valores, os valores deverão ser passados por meio de um vetor.

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

float tiraMedia(float vals[], int cont) {
   float media = 0;
   for (int i = 0; i < cont; i++) {
       media += vals[i];
   }
   return media / cont;
}

void main() {
   float val[99];
   int cont_val = 0;
   char opcao;
   do {
       printf("Adicione valores a um vetor para tirar a media: ");
       scanf("%f", &val[cont_val]);
       printf("Deseja adicionar mais valores? (S/N): ");
       scanf(" %c", &opcao, 1);
       cont_val++;
   } while (toupper(opcao) == 'S');

   float media = tiraMedia(val, cont_val);
   printf("A média dos valores é: %.2f\n", media);
}