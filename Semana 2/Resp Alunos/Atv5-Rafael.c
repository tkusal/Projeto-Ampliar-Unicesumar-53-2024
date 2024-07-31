/*
    Escreva um algoritmo em C que receba o salário de um funcionário e o cargo de seu código.
    De acordo com seu código, informe quanto de aumento ele teve e o valor atual de seu salário.
    A tabela a seguir apresenta os cargos e seus respectivos aumentos:

    Códigos        |         Cargo           |      Aumento
    1                   Desenvolvedor Java           30%
    2                   Analista de Redes            25%
    3                   Arquiteto DevOps             50%
    4                   Técnico de Suporte           13%

    A saída deverá ser:
    Salário atual: R$xxxxx,xx
    Aumento de x%: R$xxx,xx
    Novo salário:  R$xxxxx,xx

    Desafio (opcional):
    Que tal se arriscar um pouco mais em um conceito que não trabalhamos ainda? Como entrada, receba também o nome do funcionário e escrevê-lo na saída?

    Se for se aventurar, a saída deverá ser assim:

    Nome do Funcionário: xxxxxxxxxxx
    Salário atual: R$xxxxx,xx
    Aumento de x%: R$xxx,xx
    Novo salário:  R$xxxxx,xx

*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[50];
    int opcao;
    float Salario, Aumento, SalarioNovo, porcent;
    system("cls");
    printf("olar presado funcionario gostaria de dizer o seu nome ?:\n --->");
    scanf("%49s", nome);
    fflush(stdin);
    system("cls");

    printf("\ndigite o codigo do cargo a baixo \n  (1): Desenvolvedor java\n  (2):Analista de Redes\n  (3)Arquiteto DevOps\n  (4):Tecnico de Suporte");
    printf("\n--->");
    scanf("%d", &opcao);
    system("cls");

    printf("digite o seu salario\n --->");
    scanf("%f", &Salario);
    system("cls");
    switch (opcao)
    {
    case 1:
        porcent = 30;
        Aumento = Salario * 0.30;
        SalarioNovo = Salario + Aumento;
        break;
    case 2:
        porcent = 25;
        Aumento = Salario * 0.25;
        SalarioNovo = Salario + Aumento;
        break;
    case 3:
        porcent = 50;
        Aumento = Salario * 0.50;
        SalarioNovo = Salario + Aumento;
        break;
    case 4:
        porcent = 13;
        Aumento = Salario * 0.13;
        SalarioNovo = Salario + Aumento;
        break;

    default:
        printf("O valor e invalido");
        break;
    }
    printf("\nOlar %s suas novas informacoes estao abaixo", nome);
    printf("\nO salario atual: %.2f", Salario);
    printf("\nO aumento foi de %.2f%: %.2f",porcent,Aumento);
    printf("\nSeu novo saraio é: %.2f",SalarioNovo);
    printf("\n");
    system("pause");
    system("cls");

    return 0;
}
