#include <stdio.h>

int bissexto(int ano) {
    return (ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0);
}

int validarData(int dia, int mes, int ano) {
    if (ano <= 0) return 0;
    if (mes < 1 || mes > 12) return 0;

    int diasNoMes[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    if (mes == 2 && bissexto(ano)) {
        diasNoMes[1] = 29;
    }

    if (dia < 1 || dia > diasNoMes[mes - 1]) return 0;
    
    return 1;
}

void main() {
    int dia, mes, ano;
    
    printf("Digite a data (dd/mm/aaaa): ");
    if (scanf("%d/%d/%d", &dia, &mes, &ano) != 3) {
        printf("Erro ao ler a data.\n");
        return 1;
    }

    if (validarData(dia, mes, ano)) {
        printf("A data %02d/%02d/%04d é válida.\n", dia, mes, ano);
    } else {
        printf("Data inválida.\n");
    }
}