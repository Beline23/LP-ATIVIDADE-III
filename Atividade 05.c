/*Exercício 5: 

Desenvolva um programa que registre as vendas de uma loja, armazenando os valores em um vetor e apresentando o total de vendas ao final. 
Considere que cada venda precisa do nome de um produto, seu preço e sua quantidade. 
Crie um menu onde o usuário possa digitar o número 1 para adicionar uma venda e o número 2 para sair do menu e exibir o total das vendas realizadas.*/


#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    int opcao;
    int i;
    int contador = 0;
    char nomeProduto[999][200];
    int quantidade[200];
    float valorProduto[200];

    do
    {
        printf("||| MENU DE VENDAS ||| \n");
        printf("\n");
        printf("\n");
        printf("1) Adicionar venda \n");
        printf("\n");
        printf("2) Exibir total de vendas\n");
        printf("\n");
        printf("Selecione uma das alternativas acima: ");
        scanf("%d", &opcao);

        fflush(stdin);

        system("cls || clear");

        switch (opcao)
        {
        case 1:

            printf("Digite  o nome do produto: ");
            gets(nomeProduto[contador]);

            fflush(stdin);

            printf("Digite o valor do produto: ");
            scanf("%f", &valorProduto[contador]);

            printf("Digite a quantidade do produto: ");
            scanf("%d", &quantidade[contador]);

            contador++;

            system("cls || clear");

            break;
        case 2:

            for (i = 0; i < contador; i++)
            {

                printf("%dº vendas\n", i + 1);
                printf("Produtos: %s\n", nomeProduto[i]);
                printf("Valor dos produtos: %.2f\n", valorProduto[i]);
                printf("Quantidade: %d\n", quantidade[i]);
                printf("\n");
            }
            break;

        default:
            printf("Opção inválida!\n");
            break;
        }
    } while (opcao != 2);

    return 0;
}
