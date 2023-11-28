/* 
Exercício 4: 
Crie um software que leia 5 números inteiros e, em seguida, mostre na tela:
A quantidade de números ímpares;
A quantidade de números negativos;
O maior e o menor número;
A média de números pares;
A média de números inseridos. */

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>



int main()
{

    setlocale(LC_ALL, "portuguese");

    int numero, i, maior, menor, X = 5;
    int somaPares = 0;
    int QTPares = 0;
    int QTImpares = 0;
    int QTNegativos = 0;
    float mediaPares, mediaTotal = 0;

    for (i = 0; i < X; i++)
    {
        printf("Digite o %dª número: ", i + 1);
        scanf("%d", &numero);
    }

    if (numero % 2 == 0)
    {
        somaPares += numero;
        QTPares++;
    }
    if (numero % 2 != 0)
    {
        QTImpares++;
    }
    if (numero < 0)
    {
        QTNegativos++;
    }
    if (i == 0 || numero > maior)
    {
        maior = numero;
    }
    if (i == 0 || numero < menor)
    {
        menor = numero;
    }

    mediaTotal += numero;

    if (qtdPares > 0)
    {
        mediaPares = (float)somaPares / QTPares;
    }
    else
    {
        mediaPares = 0;
    }

    mediaTotal /= X;

    printf("Quantos números ímpares: %d\n", QTImpares);
    printf("\n");
    printf("Quantos números negativos: %d\n", QTNegativos);
    printf("\n");
    printf("Maior número: %d\n", maior);
    printf("\n");
    printf("Menor número: %d\n", menor);
    printf("\n");
    printf("Média Pares: %.2f\n", mediaPares);
    printf("\n");
    printf("Média Total: %.2f\n", mediaTotal);
    printf("\n");

    return 0;
}
