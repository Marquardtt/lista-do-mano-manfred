//15. Faça um programa que tendo como dados de entrada o preço de custo de um produto e um código de origem, emita o preço junto de sua procedência.
//    Caso o código não seja nenhum dos especificados, o produto deve ser classificado como importado. 
//    Código de origem: 1 - Sul, 2 - Norte 3 - Leste, 4 - Oeste, 5 ou 6 - nordeste 7 ou 8 Centro-oeste.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

void main(){
    float preco;
    int codigo;

    printf("preço: ");
    scanf("%f", &preco);
    printf("\ncodigo origem: ");
    printf("\n1 - Sul");
    printf("\n2 - Norte ");
    printf("\n3 - Leste ");
    printf("\n4 - Oeste ");
    printf("\n5 - Nordeste ");
    printf("\n6 - Nordeste ");
    printf("\n7 - Centro-oeste ");
    printf("\n8 - Centro-oeste ");
    scanf("%d", &codigo);

    switch (codigo)
    {
    case 1:
        printf("preço: %f", preco);
        printf("\n codigo: %d", codigo);
        break;
        case 2:
        printf("preço: %f", preco);
        printf("\n codigo: %d", codigo);
        break;
        case 3:
        printf("preço: %f", preco);
        printf("\n codigo: %d", codigo);
        break;
        case 4:
        printf("preço: %f", preco);
        printf("\n codigo: %d", codigo);
        break;
        case 5:
        printf("preço: %f", preco);
        printf("\n codigo: %d", codigo);
        break;
        case 6:
        printf("preço: %f", preco);
        printf("\n codigo: %d", codigo);
        break;
        case 7:
        printf("preço: %f", preco);
        printf("\n codigo: %d", codigo);
        break;
        case 8:
        printf("preço: %f", preco);
        printf("\n codigo: %d", codigo);
        break;
    default:
    printf("preço: %f", preco);
    printf("\n codigo: importado");
        break;
    }
}