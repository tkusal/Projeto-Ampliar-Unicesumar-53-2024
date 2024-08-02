/*
    Escreva um programa que faça o cadastro de uma pessoa contendo nome e idade.
    O programa deverá informar se a pessoa é maior ou menor de idade.
    O programa só poderá ser encerrado quando o usuário informar como nome a palavra "FIM".

    Dica:
    Para comparar strings é necessário uma função da biblioteca string.h
*/

#include <stdio.h>
#include <locale.h>
#include <string.h>

int main()
{

    char nome[30];
    int idade;

    do
    {
        printf("Informe o nome para continuar ou 'FIM' para encerrar o programa: ");
        scanf("%s", nome);

        if (strcmp(nome, "FIM") == 0)
        {
            return 0;
        }

        printf("Informe a idade: ");
        scanf("%d", &idade);

        if (idade >= 18)
        {
            printf("%s é maior de idade\n", nome);
        }
        else
        {
            printf("%s é menor de idade\n", nome);
        }

    } while (1);
}