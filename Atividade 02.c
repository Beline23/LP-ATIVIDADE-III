/* Exercício 2:
Crie um programa que faça o cadastro de 5 alunos em uma escola,
armazenando seus dados como: Nome, Idade e  3 Notas  para cada aluno. Ao final,
mostre todos os dados dos alunos como: Nome, Idade, as Notas e a média. Após calcular a média,
verifique para cada aluno se este estará aprovado (média maior ou igual a 7,0),
em recuperação (média menor que 7,0 e maior ou igual a X,0)
 ou reprovado (média menor que X,0) com base nestes critérios. */

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int i, j, X = 5, X2 = 3;
    char Nome[X][200];
    int Idade[X];
    float Notas[X][X2], Media[X];
    int somaNotas = 0;

    for (i = 0; i < X; i++)
    {
        printf("Nome do %d� aluno: ", i + 1);
        gets(Nome[i]);
        printf("\n");
        printf("Idade do %d� aluno: ", i + 1);
        scanf("%d", &Idade[i]);
        printf("\n");
        for (j = 0; j < X2; j++)
        {
            printf("%d� Nota do aluno: ", j + 1);
            scanf("%f", &Notas[i][j]);
            printf("\n");
            somaNotas += Notas[i][j];
        }

        Media[i] = somaNotas / 3;
        somaNotas = 0;

        fflush(stdin);
    }

    for (i = 0; i < X; i++)
    {
        printf("Nome do %d� aluno: %s \n", i + 1, Nome[i]);
        printf("\n");
        printf("Idade do %d� aluno: %d \n", i + 1, Idade[i]);

        for (j = 0; j < X2; j++)
        {
            printf("Notas do aluno: %.2f \n", Notas[i][j]);
        }

        printf("M�dia do aluno: %.2f \n", Media[i]);

        if (Media[i] >= 7)
        {
            printf("Aprovado! \n");
        }

        if (Media[i] > 5 && Media[i] < 7)
        {
            printf("Recupera��o. \n");
        }
        if (Media[i] < 5)
        {

            printf("Reprovado. \n");
        }
    }

    return 0;
}