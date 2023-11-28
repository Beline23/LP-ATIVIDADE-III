/*  Exercício 3:
Implemente um programa que permita cadastrar contatos telefônicos em uma agenda,
utilizando vetores para armazenar os Nomes e números de telefone.
Permita que o usuário digite o código 1 para adicionar um número e 2 para mostrar os números cadastrados e encerrar o software. */

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int Programa, i, X = 300;
    char Nome[X][200];
    char Telefone[X][10];
    int NumeroSalvo = 0;

    do
    {
        printf("\n||||||||||==========| Bem-Vindo a Agenda Eeletrônica |==========||||||||||\n");
        printf("\n");
        printf("\n");
        printf("        Selecione 1 - Salvar novo numero. \n");
        printf("\n");
        printf("        Selecione 2 - Exibir os numeros armazenados. \n");
        printf("\n");
        printf("\n           Qual ação deseja realizar? \n");
        scanf("%d", &Programa);
        printf("\n");

        fflush(stdin);

        switch (Programa)
        {

        case 1:

            printf("Nome do contato: ");
            gets(Nome[NumeroSalvo]);

            printf("Número do Telefone: ");
            gets(Telefone[NumeroSalvo]);

            NumeroSalvo++;
            break;

        case 2:

            for (i = 0; i < NumeroSalvo; i++)
            {

                printf("Nome do contato: %s \n", Nome[i]);
                printf("Telefone: (71) %s \n", Telefone[i]);
                printf("\n");
            }

            break;

        default:
            printf("Opção invalida! Tente novamente. \n");
            break;
        }

    } while (Programa != 2);

    return 0;
}