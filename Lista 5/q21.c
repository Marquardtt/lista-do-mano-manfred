#include <stdio.h>
#include <stdlib.h>

void converter(int decimal, char *hexadecimal) {
  int index = 0;
  while (decimal > 0) {
    int remainder = decimal % 16;
    if (remainder < 10) {
      hexadecimal[index] = '0' + remainder;
    } else {
      hexadecimal[index] = 'a' + (remainder - 10);
    }
    decimal /= 16;
    index++;
  }
  hexadecimal[index] = '\0';
  
  for (int i = 0; i < index / 2; i++) {
    char temp = hexadecimal[i];
    hexadecimal[i] = hexadecimal[index - i - 1];
    hexadecimal[index - i - 1] = temp;
  }
}

void main() {
  int decimal;
  printf("Digite um número decimal: ");
  scanf("%d", &decimal);

  if (decimal < 0) {
    printf("Por favor, insira um número decimal positivo.\n");
    return 1;
  }
  char hexadecimal[50];
  converter(decimal, hexadecimal);
  printf("O número em hexadecimal é: %s\n", hexadecimal);
}