/*
    Escreva um programa que receba 6 idades e informe quem é o mais novo e o mais velho.
    Necessário, ainda, informar se essas duas idades (menor e maior) são maior ou menor que 18 anos.
*/

#include <stdio.h>

int main()
{

    int idade, menorIdade, maiorIdade;

    for (int i = 1; i <= 6; i++)
    {
        printf("Insira uma idade: ");
        scanf("%d", &idade);

        if (i == 1)
        {
            menorIdade = idade;
            maiorIdade = idade;
        }

        if (idade < menorIdade)
        {
            menorIdade = idade;
        }

        if (idade > maiorIdade)
        {
            maiorIdade = idade;
        }
    }

    printf("A menor idade é: %d ", menorIdade);
    if (menorIdade < 18)
    {
        printf("e é menor de 18.\n");
    }
    else
    {
        printf("e é maior de 18.\n");
    }

    printf("Segunda menor idade: %d \n", segundaMenor);

    printf("A maior idade é: %d ", maiorIdade);
    if (maiorIdade < 18)
    {
        printf("e é menor de 18.\n");
    }
    else
    {
        printf("e é maior de 18.\n");
    }

    return 0;
}