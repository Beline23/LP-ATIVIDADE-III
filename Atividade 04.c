/*
Exerc�cio 4:
Crie um software que leia 5 n�meros inteiros e, em seguida, mostre na tela:
A quantidade de n�meros �mpares;
A quantidade de n�meros negativos;
O Maior e o menor n�mero;
A m�dia de n�meros pares;
A m�dia de n�meros inseridos. */

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    int numero, i, X = 5;
    int somaPares = 0, QTPres = 0, QTImpares = 0, QTNegativos = 0;
    int Maior, menor;
    float mediaPares = 0, mediaTotal = 0;

    for (i = 0; i < X; i++)
    {
        printf("Digite o %d� n�mero: ", i + 1);
        scanf("%d", &numero);
    }

    if (i == 0 || numero < menor)
    {
        menor = numero;
    }
    if (numero < 0)
    {
        QTNegativos++;
    }
    if (numero % 2 == 0)
    {
        somaPares += numero;
        QTPres++;
    }
    if (numero % 2 != 0)
    {
        QTImpares++;
    }
    if (i == 0 || numero > Maior)
    {
        Maior = numero;
    }

    if (QTPres > 0)
    {
        mediaPares = (float)somaPares / QTPres;
    }
    

    mediaTotal += numero;

    mediaTotal /= 5;

    /*PROFESSOR MEU CODIGO NAO EXIBE O NUMERO CORRETO DE NUEMROS IMPARES E NAO EXIBE A DE NUMEROS NEGATIVOS, POR GENTILEZA ME APONTE ONDE SE ENCONTRA O ERRO*/

    printf("\n||||||||||==========| Identificando os N�meros |==========||||||||||\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("     Quantidade de n�meros �mpares:     %d\n", QTImpares);
    printf("\n");
    printf("     Quantidade de n�meros negativos:     %d\n", QTNegativos);
    printf("\n");
    printf("     Maior n�mero:     %d\n", Maior);
    printf("\n");
    printf("     Menor n�mero:     %d\n", menor);
    printf("\n");
    printf("     M�dia de n�meros pares:     %.2f\n", mediaPares);
    printf("\n");
    printf("     M�dia Total:     %.2f\n", mediaTotal);

    return 0;
}