/*
    Escreva um algoritmo em C que receba o sal?rio de um funcion?rio e o cargo de seu c?digo.
    De acordo com seu c?digo, informe quanto de aumento ele teve e o valor atual de seu sal?rio.
    A tabela a seguir apresenta os cargos e seus respectivos aumentos:

    C?digos        |         Cargo           |      Aumento
    1                   Desenvolvedor Java           30%
    2                   Analista de Redes            25%
    3                   Arquiteto DevOps             50%
    4                   T?cnico de Suporte           13%

    A sa?da dever? ser:
    Sal?rio atual: R$xxxxx,xx
    Aumento de x%: R$xxx,xx
    Novo sal?rio:  R$xxxxx,xx

    Desafio (opcional):
    Que tal se arriscar um pouco mais em um conceito que n?o trabalhamos ainda? Como entrada, receba tamb?m o nome do funcion?rio e escrev?-lo na sa?da?

    Se for se aventurar, a sa?da dever? ser assim:

    Nome do Funcion?rio: xxxxxxxxxxx
    Sal?rio atual: R$xxxxx,xx
    Aumento de x%: R$xxx,xx
    Novo sal?rio:  R$xxxxx,xx

*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <windns.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int codigo, percent;
    float salario_atual, aumento, novo_salario;
    char nome[20];

    system("cls");

    printf
    (
        "Códigos        |         Cargo           |      Aumento\n"
    "1                   Desenvolvedor Java           30%%\n"""
    "2                   Analista de Redes            25%%\n"""
    "3                   Arquiteto DevOps             50%%\n"""
    "4                   Técnico de Suporte           13%%\n"""
    );

    printf("\nInforme o nome do usuario: ");
    scanf("%s", &nome);
    fflush(stdin);

    printf("Informe seu salario: R$");
    scanf("%f", &salario_atual);

    printf("Informe o código: ");
    scanf("%d", &codigo);

    switch (codigo)
    {
    case 1 :
        percent = 30;
        aumento = salario_atual * 0.30;
        novo_salario = salario_atual + aumento;
        break;
    case 2 :
        percent = 25;
        aumento = salario_atual * 0.25;
        novo_salario = salario_atual + aumento;
        break;
    case 3:
        percent = 50;
        aumento = salario_atual * 0.50;
        novo_salario = salario_atual + aumento;
        break;
    case 4:
        percent = 13;
        aumento = salario_atual * 0.13;
        novo_salario = salario_atual + aumento;
        break;
    default:
        printf("Cargo Inválido");
        break;
    }

    Sleep(1000);
    printf("\nSeu nome é: %s\n", nome);
    Sleep(1000);
    printf("Seu salário atual: R$%.2f\n", salario_atual);
    Sleep(1000);
    printf("Aumento %d%%: R$%.2f\n", percent, aumento);
    Sleep(1000);
    printf("Novo Salário: R$%.2f", novo_salario);
    Sleep(1000);
    
    return 0;
}