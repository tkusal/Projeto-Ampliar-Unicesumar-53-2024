/*
    Garantir que o sistema utilize as subrotinas de ValidarProduto e validarCLiente
    para evitar que o usuário cadastre dois/mais clientes ou dois/mais produtos com
    o mesmo código.
*/

#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

#define qtdClientes 5
#define qtdProdutos 5
#define qtdVendas 50

int totalClientes = 0, totalProdutos = 0, totalVendas = 0;

typedef struct
{
    char nome[50];
    int codigo;
    int idade;
    float saldo;

} dadosDosClientes;

typedef struct
{
    char descricao[50];
    float valorDoProduto;
    int quantidade;
    int codigoDoprod;

} dadosDosProdutos;

typedef struct
{
    int codigoClientes;
    int codigoProdutos;
    int qtdProd;
    float valorTotal;
} dadosDaVenda;

void cadastrarCliente(dadosDosClientes *p)
{
    printf("Digite o código: ");
    scanf("%d", &p->codigo);
    getchar();

    printf("Digite nome do cliente: \n");
    fgets(p->nome, sizeof(p->nome), stdin);
    p->nome[strcspn(p->nome, "\n")] = '\0';
    getchar();

    printf("Digite a idade: ");
    scanf("%d", &p->idade);
    getchar();

    printf("Digite o saldo: ");
    scanf("%f", &p->saldo);
    getchar();

    system("clear");
}

void cadastrarProduto(dadosDosProdutos *p)
{
    printf("Digite o código do produto: \n");
    scanf("%d", &p->codigoDoprod);
    getchar();

    printf("Descreva o produto por favor: \n");
    fgets(p->descricao, sizeof(p->descricao), stdin);
    p->descricao[strcspn(p->descricao, "\n")] = '\0';
    getchar();

    printf("Digite o valor do produto: \n");
    scanf("%f", &p->valorDoProduto);
    getchar();

    printf("Digite a quantidade do produto: \n");
    scanf("%d", &p->quantidade);
    getchar();

    system("clear");
}

int validarProduto(int cod, dadosDosProdutos *p)
{
    for (int i = 0; i <= totalClientes; i++)
    {
        if (cod == p[i].codigoDoprod)
        {
            return i;
        }
    }

    return -1;
}

int validarCliente(int cod, dadosDosClientes *p)
{
    for (int i = 0; i <= totalClientes; i++)
    {
        if (cod == p[i].codigo)
        {
            return i;
        } 
    }
    return -1;
}

void cadastrarVendas(dadosDaVenda *p, dadosDosClientes *clientes, dadosDosProdutos *produtos)
{
    int codProd, codCliente, qtdvenda, indiceCliente, indiceProduto;
    float valorVenda;
    printf("Digite o codigo do produto: ");
    scanf("%d", &codProd);
    indiceProduto = validarProduto(codProd, produtos);
    if (indiceProduto == -1)
    {
        printf("Código Inválido.\n");
        return;
    }

    printf("Digite o codigo do cliente: ");
    scanf("%d", &codCliente);
    indiceCliente = validarCliente(codCliente, clientes);
    if (indiceCliente == -1)
    {
        printf("Código Inválido.\n");
        return;
    }

    printf("Quantos produtos deseja vender: ");
    scanf("%d", &qtdvenda);
    if (qtdvenda > produtos[indiceProduto].quantidade)
    {
        printf("Quantidade insuficiente para venda.\n");
        return;
    }
    else
    {
        valorVenda = produtos[indiceProduto].valorDoProduto * qtdvenda;
    }

    if (valorVenda > clientes[indiceCliente].saldo)
    {
        printf("Cliente com saldo insuficiente.\n");
        return;
    }

    clientes[indiceCliente].saldo -= valorVenda;
    produtos[indiceProduto].quantidade -= qtdvenda;
    p->codigoClientes = codCliente;
    p->codigoProdutos = codProd;
    p->qtdProd = qtdvenda;
    p->valorTotal = valorVenda;
    totalVendas++;
    system("clear");
}

void listarVendas(dadosDaVenda *p)
{
    for (int i = 0; i < totalVendas; i++)
    {
        printf("Venda %d:\nCódigo do Produto: %d\n", i + 1, p->codigoProdutos);
        printf("Código do Cliente: %d\n", p->codigoClientes);
        printf("Quantidade do Produto: %d\n", p->qtdProd);
        printf("Total da Venda: R$%.2f\n", p->valorTotal);
        printf("--------------------------------------------\n");

        p++;
    }
}

void listarClientes(dadosDosClientes *p)
{
    for (int i = 0; i < totalClientes; i++)
    {
        printf("Cliente %d:\nCód.: %d\n", i + 1, p->codigo);
        printf("Nome: %s\n", p->nome);
        printf("Idade: %d\n", p->idade);
        printf("Saldo: R$%.2f\n", p->saldo);
        printf("--------------------------------------------\n");

        p++;
    }
}

int main()
{

    setlocale(LC_ALL, "Portuguese_Brazil");
    dadosDosClientes clientes[qtdClientes];
    dadosDosProdutos produtos[qtdProdutos];
    dadosDaVenda vendas[qtdVendas];

    int opcao;

    do
    {
        printf("Escolha uma opção:\n1. Cadastrar cliente\n2. Cadastrar Produto\n3. Cadastrar Venda\n4. Listar todas as vendas\n5. Listar todos os clientes\n6. Encerrar\n");
        scanf("%d", &opcao);
        getchar();
        system("clear");

        switch (opcao)
        {
        case 1:
            if (totalClientes > qtdClientes)
            {
                printf("A quantidade de clientes já esta no limite\n");
            }
            else
            {
                cadastrarCliente(&clientes[totalClientes]);
                totalClientes++;
            }
            break;

        case 2:
            if (totalProdutos > qtdProdutos)
            {
                printf("A quantidade de produtos já esta no limite\n");
            }
            else
            {
                cadastrarProduto(&produtos[totalProdutos]);
                totalProdutos++;
            }
            break;

        case 3:
            if (totalVendas > qtdVendas)
            {
                printf("A quantidade de vendas já esta no limite\n");
            }
            else
            {
                cadastrarVendas(&vendas[totalVendas], clientes, produtos);
            }
            break;

        case 4:
            listarVendas(vendas);
            break;

        case 5:
            listarClientes(clientes);
            break;

        case 6:
            system("clear");
            printf("Encerrado");
            return 0;
            break;

        default:
            printf("Opção inválida\n");
            break;
        }

    } while (1);
}