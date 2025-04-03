//16. A série de Fibonacci é formada pela seqüência 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, ... Faça um programa capaz de gerar a série de acordo com a quantidade de termos informada pelo usuário.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

void main() {
   int n, t1 = 0, t2 = 1, nextTerm;

   printf("Digite o número de termos: ");
   scanf("%d", &n);

   printf("Série de Fibonacci: ");

   for (int i = 1; i <= n; ++i) {
       printf("%d, ", t1);
       nextTerm = t1 + t2;
       t1 = t2;
       t2 = nextTerm;
   }
}