/*
    Escreva um algoritmo em C que receba o salï¿½rio de um funcionï¿½rio e o cargo de seu cï¿½digo.
    De acordo com seu cï¿½digo, informe quanto de aumento ele teve e o valor atual de seu salï¿½rio.
    A tabela a seguir apresenta os cargos e seus respectivos aumentos:

    Cï¿½digos        |         Cargo           |      Aumento
    1                   Desenvolvedor Java           30%
    2                   Analista de Redes            25%
    3                   Arquiteto DevOps             50%
    4                   Tï¿½cnico de Suporte           13%

    A saï¿½da deverï¿½ ser:
    Salï¿½rio atual: R$xxxxx,xx
    Aumento de x%: R$xxx,xx
    Novo salï¿½rio:  R$xxxxx,xx

    Desafio (opcional):
    Que tal se arriscar um pouco mais em um conceito que nï¿½o trabalhamos ainda? Como entrada, receba tambï¿½m o nome do funcionï¿½rio e escrevï¿½-lo na saï¿½da?

    Se for se aventurar, a saï¿½da deverï¿½ ser assim:

    Nome do Funcionï¿½rio: xxxxxxxxxxx
    Salï¿½rio atual: R$xxxxx,xx
    Aumento de x%: R$xxx,xx
    Novo salï¿½rio:  R$xxxxx,xx

*/

#include <stdio.h>
#include <locale.h>
#include <windows.h>

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

    Sleep(500);
    printf("\nSeu nome é: %s\n", nome);
    Sleep(1000);
    printf("Seu salário atual: R$%.2f\n", salario_atual);
    Sleep(1000);
    printf("Aumento %d%%: R$%.2f\n", percent, aumento);
    Sleep(1000);
    printf("Novo Salário: R$%.2f", novo_salario);
    Sleep(500);
    
    return 0;
}