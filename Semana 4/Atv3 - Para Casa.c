/*
    Escreva um programa que receba e armazene 5 numeros inteiros em um vetor.
    O programa deverá ordenar esses numeros em ordem crescente.
    E depois, escreve-los na tela.
*/

#include <stdio.h>

int main()
{
    int numeros[5], aux;

    for (int i = 0; i < 5; i++)
    {
        printf("Informe um numero: ");
        scanf("%d", &numeros[i]);
    }
    // Bubble Sort
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5 - i - 1; j++)
        {
            if (numeros[j] < numeros[j + 1])
            {
                aux = numeros[j];
                numeros[j] = numeros[j + 1];
                numeros[j + 1] = aux;
            }
        }
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d - ", numeros[i]);

    }
}