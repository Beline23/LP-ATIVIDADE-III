/* Exercício 1: 
Crie um algoritmo que leia o nome, a idade, o peso e a altura de 5 pessoas, armazenando em vetores.

- Mostre as informações solicitadas de cada pessoa e informe:
A maior altura e a menor altura.
O maior peso e menor peso;
A maior idade e a menor idade. */

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(){
    
    int X = 5;
    int i, j;
    char Nome [X] [200];
    int Idade [X];
    float Altura [X], Peso [X];
    float MaiorAltura = 0, MenorAltura = 9999, MaiorPeso = 0, MenorPeso = 9999, MaiorIdade = 0, MenorIdade = 9999;
    char nomeMaiorAltura[200], nomeMenorAltura[200], nomeMaiorIdade[200], nomeMenorIdade[200], nomeMaiorPeso[200], nomeMenorPeso[200];
    setlocale(LC_ALL, "portugues");

    for ( i = 0; i < X; i++)
    {
         for (i = 0; i < 5; i++)
    {
       printf("Digite o nome: \n");
        gets(Nome[i]);
        printf("Digite a idade: \n");
        scanf("%d", &Idade[i]);

        printf("Digite o peso: \n");
        scanf("%f", &Peso[i]);

        printf("Digite a altura: \n");
        scanf("%f", &Altura[i]);

                if (Altura[i] > MaiorAltura)
        {
            MaiorAltura = Altura[i];
            strcpy(nomeMaiorAltura, Nome[i]);
        }
        if (Altura[i] < MenorAltura)
        {
            MenorAltura = Altura[i];
            strcpy(nomeMenorAltura, Nome[i]);
        }

        if (Idade[i] > MaiorIdade)
        {
            MaiorIdade = Idade[i];
            strcpy(nomeMaiorIdade, Nome[i]);
        }
        if (Idade[i] < MenorIdade)
        {
            MenorIdade = Idade[i];
            strcpy(nomeMenorIdade, Nome[i]);
        }

        if (Peso[i] > MaiorPeso)
        {
            MaiorPeso = Peso[i];
            strcpy(nomeMaiorPeso, Nome[i]);
        }

        if (Peso[i] < MenorPeso)
        {
            MenorPeso = Peso[i];
            strcpy(nomeMenorPeso, Nome[i]);
        }
        fflush(stdin);
    }

    printf("\nPessoa com a maior altura: %s  %.2f \n", nomeMaiorAltura, MaiorAltura);
    printf("\nPessoa com a menor altura: %s  %.2f \n", nomeMenorAltura, MenorAltura);
    
    printf("\nPessoa com o maior peso: %s  %.2f \n", nomeMaiorPeso, MaiorPeso);
    printf("\nPessoa com o menor peso: %s  %.2f \n", nomeMenorPeso, MenorPeso);
    
    printf("\nPessoa com a maior idade: %s  %d \n", nomeMaiorIdade, MaiorIdade);
    printf("\nPessoa com a menor idade: %s  %d \n", nomeMenorIdade, MenorIdade);


    }
    


    
    
    
    
    return 0;
}
