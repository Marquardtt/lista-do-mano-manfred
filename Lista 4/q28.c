#include <stdio.h>
#include <string.h>
#include <ctype.h>

void main() {
  char str[51], cleanStr[51];
  int i, j = 0, len;

  fgets(str, 51, stdin);
  str[strcspn(str, ".")] = '\0';

  for (i = 0; str[i] != '\0'; i++) {
    if (isalnum(str[i])) {
      cleanStr[j++] = tolower(str[i]);
    }
  }
  cleanStr[j] = '\0';

  len = strlen(cleanStr);
  for (i = 0; i < len / 2; i++) {
    if (cleanStr[i] != cleanStr[len - i - 1]) {
      printf("Nao e um palindromo.\n");
      return 0;
    }
  }

  printf("E um palindromo.\n");

}