/*  Exercício 3: 
Implemente um programa que permita cadastrar contatos telefônicos em uma agenda, 
utilizando vetores para armazenar os nomes e números de telefone. 
Permita que o usuário digite o código 1 para adicionar um número e 2 para mostrar os números cadastrados e encerrar o software. */

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int n;
    char nome[999][200];
    char numeroTelefone[999][200];
    int i;
    int salvo = 0;

    do
    {
        printf("Selecione 1 - Salvar novo numero. \n");
        printf("Selecione 2 - Exibir os numeros armazenados. \n");
        printf("\nDigite a opção ");
        scanf("%d", &n);
        printf("\n");

        fflush(stdin);

        switch (n)
        {

        case 1:

            printf("Nome do contato: ");
            gets(nome[salvo]);

            printf("Número do whatsapp: ");
            gets(numeroTelefone[salvo]);

            salvo++;
            break;

        case 2:

            for (i = 0; i < salvo; i++)
            {

                printf("Nome do contato: %s \n", nome[i]);
                printf("Whatsapp: %s \n", numeroTelefone[i]);
                printf("\n");
            }

            break;

        default:
            printf("Opção invalida! Tente novamente. \n");
            break;
        }

    } while (n != 2);

    return 0;
}