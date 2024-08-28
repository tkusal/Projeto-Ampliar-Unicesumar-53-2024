/*
    Escreva um programa para controlar o estoque de uma loja de eletrônicos.
    O programa deve consistir em um menu que permita:

    1. Cadastrar novo produto: O sistema deve suportar até 3 produtos, em um vetor. Cada produto deve possuir:
        a. Código
        b. Marca
        c. Descrição
        d. Preço
        e. Quantidade

    2. Alterar o preço de um produto: Deve permitir buscar um produto pelo código e alterar seu preço.

    3. Vender um Produto: Nesta opção, informa o código do produto. Com isso, ele reduz a quantidade do produto
    e armazena o valor da venda em "saldo total". Necessário validar se existe o produto em estoque. Caso não exista,
    ou seja, estoque = 0, informar que já esgotou.

    4. Visualiza saldo total de vendas

    5. Encerrar o sistema
*/

#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

struct tipoProduto
{
    char marca[15], descricao[20];
    int cod, qtd;
    float preco;
};

#define qtPrd 3

int main()
{
    setlocale(LC_ALL, "Protuguese_Brazil");

    struct tipoProduto produtos[qtPrd];
    int opc, indice = 0, altCod, qtdVenda;
    float saldoVenda = 0.0;
    system("clear");

    do
    {
        printf("Escolha uma opção: \n");
        printf("1. Cadastrar produto\n2. Alterar preço\n3. Cadastrar venda\n4. Venda total\n5. Sair\n");
        scanf("%d", &opc);
        system("clear");

        switch (opc)
        {
        case 1:
            if (indice >= qtPrd)
            {
                printf("Não há espaços para novos produtos\n\n");
            }
            else
            {
                printf("Informe o código do produto: ");
                scanf("%d", &produtos[indice].cod);
                getchar();

                printf("Informe a Marca: ");
                fgets(produtos[indice].marca, sizeof(produtos[indice].marca), stdin);
                produtos[indice].marca[strcspn(produtos[indice].marca, "\n")] = '\0';
                getchar();

                printf("Informe a Descrição: ");
                fgets(produtos[indice].descricao, sizeof(produtos[indice].descricao), stdin);
                produtos[indice].descricao[strcspn(produtos[indice].descricao, "\n")] = '\0';
                getchar();

                printf("Informe a quantidade: ");
                scanf("%d", &produtos[indice].qtd);
                getchar();

                printf("Informe o preço: ");
                scanf("%f", &produtos[indice].preco);
                getchar();

                indice++;
                system("clear");
            }
            break;
        case 2:
            printf("Informe o código do produto que deseja atualizar o valor: ");
            scanf("%d", &altCod);
            getchar();

            for (int i = 0; i < indice; i++)
            {
                if (altCod == produtos[i].cod)
                {
                    printf("O valor atual do produto é: %f\n", produtos[i].preco);
                    printf("Informe um novo valor:");
                    scanf("%f", &produtos[i].preco);
                    getchar();
                }                
            }
            system("clear");
            break;
        case 3:
            printf("Informe o código do produto que será vendido: ");
            scanf("%d", &altCod);
            getchar();

            printf("Informe a quandidade do produto que será vendida: ");
            scanf("%d", &qtdVenda);
            getchar();

            for (int i = 0; i < indice; i++)
            {
                if (altCod == produtos[i].cod)
                {
                    if (produtos[i].qtd >= qtdVenda) {
                        produtos[i].qtd -= qtdVenda;
                        saldoVenda += qtdVenda * produtos[i].preco;
                        system("clear");
                        printf("Venda cadastrada com sucesso\n\n");
                    }
                    else {
                        system("clear");
                        printf("Quantidade insuficiente em estoque\n\n");
                    }
                }                
            }
            break;
        case 4:
            printf("Saldo total de venda: %.2f\n\n", saldoVenda);
            break;
        case 5:
            printf("Programa encerrado.\n\n");
            return 0;
            break;
        default:
            printf("Opção inválida\n\n");
            break;
        }        

    } while (1);
}