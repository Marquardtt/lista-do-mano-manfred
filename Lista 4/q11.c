#include <stdio.h>
#include <time.h>

void main() {
    int n, anoAtual;
    int total = 0;
    
    printf("numero de pessoas na lista? ");
    scanf("%d", &n);
    
    int aniversario[n];
    printf("ano de nascimento das %d pessoas:\n", n);
    for (int i = 0; i < n; i++) {
        printf("ano de nascimento da pessoa %d: ", i + 1);
        scanf("%d", &aniversario[i]);
    }
    
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    anoAtual = tm.tm_year + 1900;

    printf("\nidade das pessoas:\n");
    for (int i = 0; i < n; i++) {
        int age = anoAtual - aniversario[i];
        printf("pessoa %d: %d anos\n", i + 1, age);
        total += age;
    }

    double media = (double)total / n;
    printf("\n media do grupo: %.2f anos\n", media);
}