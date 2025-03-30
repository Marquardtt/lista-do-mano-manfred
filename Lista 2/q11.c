//11. Faça um programa que implemente uma calculadora simples. O programa deve solicitar os operandos e o operador e mostrar a entrada e o resultado. Inclua verificadores de erro para operadores inválidos e tentativa de divisão por zero.
//    a. O menu será como segue:
//    [ 1 ] – Adição
//    [ 2 ] – Subtração
//    [ 3 ] – Multiplicação
//    [ 4 ] – Divisão
//    [ 5 ] – Fim

void main(){
    int opcao;
    float num_1, num_2;

    printf("Digite um número: ");
    scanf("%f", &num_1);
    printf("Digite mais um número: ");
    scanf("%f", &num_2);

    printf("\n[ 1 ] - Adição");
    printf("\n[ 2 ] - Subtração");
    printf("\n[ 3 ] - Multiplicação");
    printf("\n[ 4 ] - Divisão");
    printf("\n[ 5 ] - Fim");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("\n resultado da adição é %.2f", num_1 + num_2);
        return;
    case 2:
        printf("\nO resultado da subtração é %.2f", num_1 - num_2);
        return;
    case 3:
        printf("\nO resultado da multiplicação é %.2f", num_1 * num_2);
        return;
    case 4:
        printf("\nO resultado da divisão é %.2f", num_1 / num_2);
        return;
    default:
        printf("\nErro inesperado");
    }
}