/* Exercício 2: 
Crie um programa que faça o cadastro de 5 alunos em uma escola, 
armazenando seus dados como: nome, idade e  3 notas  para cada aluno. Ao final, 
mostre todos os dados dos alunos como: nome, idade, as notas e a média. Após calcular a média, 
verifique para cada aluno se este estará aprovado (média maior ou igual a 7,0), 
em recuperação (média menor que 7,0 e maior ou igual a 5,0)
 ou reprovado (média menor que 5,0) com base nestes critérios. */


#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>


int main()
{
    setlocale(LC_ALL, "portuguese");

    int i, j;
    char nome[5][200];
    int idade[5];
    float notas[5][3];
    float media[5];
    int somaNotas = 0;

    for (i = 0; i < 5; i++)
    {
        printf("Digite o nome do %d° aluno: ", i + 1);
        gets(nome[i]);
        printf("Digite a idade do %d° aluno: ", i + 1);
        scanf("%d", &idade[i]);

        for (j = 0; j < 3; j++)
        {
            printf("Digite a %d° nota do aluno: ", j + 1);
            scanf("%f", &notas[i][j]);

            somaNotas += notas[i][j];
        }

        media[i] = somaNotas / j;
        somaNotas = 0;

        fflush(stdin);
        system ("cls||clear");
    }

    for (i = 0; i < 5; i++)
    {
        printf("Nome do %dÂ° aluno: %s \n", i + 1, nome[i]);
        printf("Idade do %dÂ° aluno: %d \n", i + 1, idade[i]);

        for (j = 0; j < 3; j++)
        {
            printf("Notas do aluno: %.2f \n", notas[i][j]);
        }

        printf("Média do aluno: %.2f \n", media[i]);

        if (media[i] >= 7)
        {
            printf("Aprovado! \n");
        }

        if (media[i] > 5 && media [i] < 7)
        {
            printf("Recuperação. \n");
        }
        if (media [i] < 5)
        {
    
            printf("Reprovado. \n");
        }
    }

    return 0;
}