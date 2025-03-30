//12. Faça um programa onde o usuário possa escolher em um menu as seguintes opções de cálculo:
//    a. Área Retângulo = base * altura
//    b. Área Triângulo = base * altura/2
//    c. Área do Círculo = 2 * pi * r * r
//    d. Área do quadrado = lado * lado
//    e. Área do trapézio = (lmaior + lmenor) * altura/2
//    f. Sair

#include <stdio.h>
#define PI 3.14

void main() {
    char opcao;
    float base, altura, lado, raio, lmaior, lmenor, area;

    do {
        printf("\nEscolha uma das seguintes opções:\n");
        printf("a. Área Retângulo = base * altura\n");
        printf("b. Área Triângulo = base * altura / 2\n");
        printf("c. Área do Círculo = PI * r * r\n");
        printf("d. Área do quadrado = lado * lado\n");
        printf("e. Área do trapézio = (lmaior + lmenor) * altura / 2\n");
        printf("f. Sair\n");
        printf("Opção: ");
        scanf(" %c", &opcao);

        switch (opcao) {
            case 'a':
                printf("Digite a base: ");
                scanf("%f", &base);
                printf("Digite a altura: ");
                scanf("%f", &altura);
                area = base * altura;
                printf("Área do Retângulo: %.2f\n", area);
                break;

            case 'b':
                printf("Digite a base: ");
                scanf("%f", &base);
                printf("Digite a altura: ");
                scanf("%f", &altura);
                area = (base * altura) / 2;
                printf("Área do Triângulo: %.2f\n", area);
                break;

            case 'c':
                printf("Digite o raio: ");
                scanf("%f", &raio);
                area = PI * raio * raio;
                printf("Área do Círculo: %.2f\n", area);
                break;

            case 'd':
                printf("Digite o lado: ");
                scanf("%f", &lado);
                area = lado * lado;
                printf("Área do Quadrado: %.2f\n", area);
                break;

            case 'e':
                printf("Digite o lado maior: ");
                scanf("%f", &lmaior);
                printf("Digite o lado menor: ");
                scanf("%f", &lmenor);
                printf("Digite a altura: ");
                scanf("%f", &altura);
                area = (lmaior + lmenor) * altura / 2;
                printf("Área do Trapézio: %.2f\n", area);
                break;

            case 'f':
                printf("Saindo do programa...\n");
                break;

            default:
                printf("Opção inválida! Tente novamente.\n");
                break;
        }
    } while (opcao != 'f');
}