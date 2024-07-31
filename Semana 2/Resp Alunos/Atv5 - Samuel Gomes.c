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
#include <string.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    
    setlocale(LC_ALL, "Portuguese");
    
    // system("clear");
    system("cls");

    char Nome[100];
    float SalarioAtual, NovoSalario, AumentoSalario;
    int CodigoCargo, Porcentagem;
    
    printf("Digite o Nome do Funcionário: ");
    // scanf("%s", Nome); // Lê somente a primeira palavra da string
    fgets(Nome, sizeof(Nome), stdin); // Lê todas as palavras da string independente de espaços

    // system("clear");
    system("cls");

    printf("Digite o salário do Funcionário: ");
    scanf("%f", &SalarioAtual);
    
    // system("clear");
    system("cls");

    printf("Códigos        |         Cargo           |      Aumento \n");
    printf("1                   Desenvolvedor Java             30%% \n");
    printf("2                   Analista de Redes              25%% \n");
    printf("3                   Arquiteto DevOps               50%% \n");
    printf("4                   Técnico de Suporte             13%% \n");

    printf("Digite o código do cargo: ");
    scanf("%d", &CodigoCargo);
    
    // system("clear");
    system("cls");

    switch (CodigoCargo) {
        
        case 1:
            Porcentagem = 30;
            break;
        case 2:
            Porcentagem = 25;
            break;
        case 3:
            Porcentagem = 50;
            break;
        case 4:
            Porcentagem = 13;
            break;
        default:
            printf("Código digitado inválido! \n");
            Porcentagem = 0;
            break;

    }

    AumentoSalario  = SalarioAtual * (Porcentagem / 100.0);
    NovoSalario     = SalarioAtual + AumentoSalario;
    
    printf("Nome do Funcionário: %s \n", Nome);
    printf("Salário atual: R$ %.2f \n", SalarioAtual);
    printf("Aumento de %d%%: R$ %.2f \n", Porcentagem, AumentoSalario);
    printf("Novo salário: R$ %.2f \n", NovoSalario);
    
    return 0;
}