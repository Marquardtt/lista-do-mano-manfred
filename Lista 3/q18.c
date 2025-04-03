//18. Um número primo é aquele que é divisível somente por ele mesmo e por 1. Faça um programa que peça um número e informe se o número é ou não primo

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

void main() {
   int num, i, num_primo = 1;
   printf("Digite um numero: ");
   scanf("%d", &num);

   if (num <= 1) {
       num_primo = 0;
   } else {
       for (i = 2; i <= sqrt(num); i++) {
           if (num % i == 0) {
               num_primo = 0;
               break;
           }
       }
   }

   if (num_primo) {
       printf("%d é um número primo\n", num);
   } else {
       printf("%d não é um número primo\n", num);
   }
}