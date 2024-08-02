/*
    Escreva um programa que calcule o fatorial de um numero

    Exemplo: Fartorial de 5 = (((5*4) *3) *2)*1
*/

#include <stdio.h>

int main()
{
    int numero;

    printf("Informe um numero inteiro: ");
    scanf("%d", &numero);

    for (int i = numero - 1; i >= 1; i--)
    {
        numero = numero * i;
    }

    printf("%d", numero);

    return 0;
}