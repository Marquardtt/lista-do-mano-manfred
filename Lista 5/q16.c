#include <stdio.h>

void exibirMensagem(int linha, int coluna, const char *mensagem) {
    printf("\033[%d;%dH%s", linha, coluna, mensagem);
    fflush(stdout);
}

void main() {
    int linha, coluna;
    char mensagem[100];
    
    printf("Digite a linha: ");
    scanf("%d", &linha);
    printf("Digite a coluna: ");
    scanf("%d", &coluna);
    getchar();
    printf("Digite a mensagem: ");
    fgets(mensagem, sizeof(mensagem), stdin);
    exibirMensagem(linha, coluna, mensagem);
}
