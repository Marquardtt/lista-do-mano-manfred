#include <stdio.h>
#include <ctype.h>

void main() {
  char frase[81];
  int espacos = 0, vogais = 0;

  fgets(frase, 81, stdin);

  for (int i = 0; frase[i] != '\0'; i++) {
    if (frase[i] == ' ')
      espacos++;
    if (tolower(frase[i]) == 'a' || tolower(frase[i]) == 'e' || 
      tolower(frase[i]) == 'i' || tolower(frase[i]) == 'o' || 
      tolower(frase[i]) == 'u')
      vogais++;
  }

  printf("Espacos em branco: %d\n", espacos);
  printf("Vogais: %d\n", vogais);

}