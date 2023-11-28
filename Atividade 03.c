/*  Exerc�cio 3:
Implemente um programa que permita cadastrar contatos telef�nicos em uma agenda,
utilizando vetores para armazenar os Nomes e n�meros de telefone.
Permita que o usu�rio digite o c�digo 1 para adicionar um n�mero e 2 para mostrar os n�meros cadastrados e encerrar o software. */

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
        printf("\n||||||||||==========| Bem-Vindo a Agenda Eeletr�nica |==========||||||||||\n");
        printf("\n");
        printf("\n");
        printf("        Selecione 1 - Salvar novo numero. \n");
        printf("\n");
        printf("        Selecione 2 - Exibir os numeros armazenados. \n");
        printf("\n");
        printf("\n           Qual a��o deseja realizar? \n");
        scanf("%d", &Programa);
        printf("\n");

        fflush(stdin);

        switch (Programa)
        {

        case 1:

            printf("Nome do contato: ");
            gets(Nome[NumeroSalvo]);

            printf("N�mero do Telefone: ");
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
            printf("Op��o invalida! Tente novamente. \n");
            break;
        }

    } while (Programa != 2);

    return 0;
}