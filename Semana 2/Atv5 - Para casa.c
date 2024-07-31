/*
    Escreva um algoritmo em C que receba o sal�rio de um funcion�rio e o cargo de seu c�digo.
    De acordo com seu c�digo, informe quanto de aumento ele teve e o valor atual de seu sal�rio.
    A tabela a seguir apresenta os cargos e seus respectivos aumentos:

    C�digos        |         Cargo           |      Aumento
    1                   Desenvolvedor Java           30%
    2                   Analista de Redes            25%
    3                   Arquiteto DevOps             50%
    4                   T�cnico de Suporte           13%

    A sa�da dever� ser:
    Sal�rio atual: R$xxxxx,xx
    Aumento de x%: R$xxx,xx
    Novo sal�rio:  R$xxxxx,xx

    Desafio (opcional):
    Que tal se arriscar um pouco mais em um conceito que n�o trabalhamos ainda? Como entrada, receba tamb�m o nome do funcion�rio e escrev�-lo na sa�da?

    Se for se aventurar, a sa�da dever� ser assim:

    Nome do Funcion�rio: xxxxxxxxxxx
    Sal�rio atual: R$xxxxx,xx
    Aumento de x%: R$xxx,xx
    Novo sal�rio:  R$xxxxx,xx

*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main () {
    float salarioAtual, aumento, novoSalario;
    int cod, percent;
    char nome[15];

    setlocale(LC_ALL, "Portuguese_Brazil");

    system("clear");

    printf("Informe o salário atual: ");
    scanf("%f", &salarioAtual);
    system("clear");
    
    printf("Informe o nome do usuário: ");
    scanf("%s", nome);
    fflush(stdin);
    system("clear");    

    printf("\nInforma o código do cargo:\n");
    system("pause");
    printf("1. Dev Java\n2. Analista de Redes\n3. DevOps\n4. Téc. Suporte\n");
    scanf("%d", &cod);    
    system("clear");
    
    switch (cod)
    {
    case 1:
        percent = 30;
        aumento = salarioAtual * 0.3;
        novoSalario = salarioAtual + aumento;
        break;
    case 2:
        percent = 25;
        aumento = salarioAtual * 0.25;
        novoSalario = salarioAtual + aumento;
        break;
    case 3:
        percent = 50;
        aumento = salarioAtual * 0.5;
        novoSalario = salarioAtual + aumento;
        break;     
    case 4:
        percent = 13;
        aumento = salarioAtual * 0.13;
        novoSalario = salarioAtual + aumento;
        break;      
    default:
        printf("Cargo inválido");
        return 1;
        break;
    }

    printf("Nome do funcionário: %s\n", nome);
    printf("Salário atual: %.2f\n", salarioAtual);
    printf("Aumento de %d por cento: %.2f\n", percent, aumento);
    printf("Novo salário: %.2f", novoSalario);

    return 0;
}