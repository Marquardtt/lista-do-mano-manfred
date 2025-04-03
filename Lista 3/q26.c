//26. Considere que um carro vai fazer uma viagem entre duas cidades e que a distancia percorrida é informada(em Km).Informe também a capacidade do tanque e o consumo médio(Km / l), do veículo.No inicio da viagem o carro esta com o tanque cheio.
//	  a.Deseja - se saber :
//	  b.Quantas vezes foi necessário reabastecer.
//	  c.Número de litros consumidos para percorrer a distancia indicada.
//	  d.Quantos litros restaram no tanque após a chegada ao destino.
//	  e.O programa deve permitir que o usuário execute esses cálculos quantas vezes ele quiser.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

void main() {  
    int kmh, capacidade, consumo;  
    char opcao;  

    do {  
        printf("Quantos km: ");  
        scanf("%d", &kmh);  
        printf("Capacidade do tanque (em litros): ");  
        scanf("%d", &capacidade);  
        printf("Consumo médio (km/l): ");  
        scanf("%d", &consumo);  

        int litros_consumidos = kmh / consumo;  
        int reabastecimentos = litros_consumidos / capacidade;  
        int litros_restantes = capacidade - (litros_consumidos % capacidade);  

        printf("\nReabasteceu: %d vezes", reabastecimentos);  
        printf("\nNúmero de litros consumidos: %d litros", litros_consumidos);  
        printf("\nLitros restantes no tanque: %d litros\n", litros_restantes);  

        printf("\nDeseja realizar outro cálculo? (s/n): ");  
        scanf(" %c", &opcao);  
    } while (opcao == 's' || opcao == 'S');  
}