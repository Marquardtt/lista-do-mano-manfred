#include <stdio.h>

int main(){
    float medias[10];
    float notas[4];
    int cont_maior7 = 0;  

    for (int i = 0; i < 10; i++)  
    {
        float soma = 0;
        for (int j = 0; j < 4; j++)
        {
            printf("Digite a nota %d do aluno %d: ", j + 1, i + 1);    
            scanf("%f", &notas[j]);
            soma += notas[j];  
        }
        medias[i] = soma / 4;
    }

    for (int i = 0; i < 10; i++)
    {
        if (medias[i] >= 7.0){
            cont_maior7++;
        }
    }

    printf("Número de alunos com média maior ou igual a 7.0: %d\n", cont_maior7);
}
