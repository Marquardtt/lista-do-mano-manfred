#include <stdio.h>

void main() {
    int idades[5];
    float alturas[5];

    for (int i = 0; i < 5; i++) {
        printf("Digite a idade da pessoa %d: ", i + 1);
        scanf("%d", &idades[i]);
        printf("Digite a altura da pessoa %d (em metros): ", i + 1);
        scanf("%f", &alturas[i]);
    }

    printf("\nordem inversa:\n");
    for (int i = 4; i >= 0; i--) {
        printf("Pessoa %d - Idade: %d, Altura: %.2f metros\n", i + 1, idades[i], alturas[i]);
    }
}
