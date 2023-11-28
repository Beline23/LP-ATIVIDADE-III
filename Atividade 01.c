/* Exerc√≠cio 1:
Crie um algoritmo que leia o nome, a idade, o peso e a altura de 5 pessoas, armazenando em vetores.

- Mostre as informa√ß√µes solicitadas de cada pessoa e informe:
A maior altura e a menor altura.
O maior peso e menor peso;
A maior idade e a menor idade. */

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main()
{

    int X = 2, X2 = 1;
    int i, j;
    char Nome[X][200];
    int Idade[X][X2], MaiorIdade = 0, MenorIdade = 9999;
    float Altura[X][X2], Peso[X][X2];
    float MaiorAltura = 0, MenorAltura = 9999, MaiorPeso = 0, MenorPeso = 9999;
    char NomeMaiorAltura[200], NomeMenorAltura[200], NomeMaiorIdade[200], NomeMenorIdade[200], NomeMaiorPeso[200], NomeMenorPeso[200];

    setlocale(LC_ALL, "portugues");

    for (i = 0; i < X; i++)
    {
        printf("Digite o nome: \n");
        gets(Nome[i]);

        for (j = 0; j < X2; j++)
        {

            printf("Digite a idade: \n");
            scanf("%d", &Idade[i][j]);

            printf("Digite o peso: \n");
            scanf("%f", &Peso[i][j]);

            printf("Digite a altura: \n");
            scanf("%f", &Altura[i][j]);

            printf("\n");
            printf("\n");
            printf("\n");

            if (Altura[i][j] > MaiorAltura)
            {
                MaiorAltura = Altura[i][j];
                strcpy(NomeMaiorAltura, Nome[i]);
            }

            if (Altura[i][j] < MenorAltura)
            {
                MenorAltura = Altura[i][j];
                strcpy(NomeMenorAltura, Nome[i]);
            }

            if (Idade[i][j] > MaiorIdade)
            {
                MaiorIdade = Idade[i][j];
                strcpy(NomeMaiorIdade, Nome[i]);
            }
            if (Idade[i][j] < MenorIdade)
            {
                MenorIdade = Idade[i][j];
                strcpy(NomeMenorIdade, Nome[i]);
            }

            if (Peso[i][j] > MaiorPeso)
            {
                MaiorPeso = Peso[i][j];
                strcpy(NomeMaiorPeso, Nome[i]);
            }

            if (Peso[i][j] < MenorPeso)
            {
                MenorPeso = Peso[i][j];
                strcpy(NomeMenorPeso, Nome[i]);
            }
            fflush(stdin);
        }
    }

   /* printf("\n||||||||||==========| DADOS PESSOAIS |==========||||||||||\n");

    for (i = 0; i < X; i++)
    {
        printf("Nome: %s \n", Nome[i]);

        for (j = 0; j < X2; j++)
        {
            printf("Idade: %i \n", Idade[i][j]);
            printf("\n");
            printf("Peso: %f \n", Peso[i][j]);
            printf("\n");
            printf("Altura: %f \n", Altura[i][j]);

            printf("\n");
            printf("\n");
        }
  
PROFESSOR NAO CONSEGUI FAZER ESTA PARTE DO CODIGO FUNCIONAR, ELE SOMENTE MOSTRA OS DADOS DA PRIMEIRA PESSOA INSERIDA PELO USU¡RIO, EU QUERIA DEMONSTRAR AS 5 NA TELA, 
POREM NAO CONSIGO, O SENHOR PODE DEPOIS ME INFORMAR ONDE ESTA O ERRO?

        */

        printf("\n||||||||||==========| COMPARA«’ES |==========||||||||||\n");
        printf("\n");
        printf("\n");
        printf("\nMais Alto(a): %s  %.2f \n", NomeMaiorAltura, MaiorAltura);
        printf("\n");
        printf("\nMais Baixo(a) %s  %.2f \n", NomeMenorAltura, MenorAltura);
        printf("\n");
        printf("\nMais Pesado(a): %s  %.2f \n", NomeMenorPeso, MaiorPeso);
        printf("\n");
        printf("\nMenos Pesada: %s  %.2f \n", NomeMenorPeso, MenorPeso);
        printf("\n");
        printf("\nMais velha: %s  %d \n", NomeMaiorIdade, MaiorIdade);
        printf("\n");
        printf("\nMais novo: %s  %d \n", NomeMenorIdade, MenorIdade);

        return 0;
    }
