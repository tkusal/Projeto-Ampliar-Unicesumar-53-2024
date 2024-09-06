/*
    Escreva um programa que cadastre até 5 clientes e até 5 produtos.
    No sistema o usuário deve poder:

    - Cadastrar o cliente (Código, Nome, idade, saldo)
    - Cadastrar produto (código do produto, descrição do produto, valor do produto, qtd)
    - Cadastrar uma venda de um produto pra um cliente (pelo código do cliente e código do produto).
    - Listar todas as vendas
    - Listar todas os cliente

    - Use SUBROTINAS e PONTEIROS onde julgar necessário

    Cadastro de venda:
    - Recebe o código do cliente e valida se o cliente existe
    - Recebe o código do produto e valida se o produto existe
    - Recebe a quantidade de produto da venda e valida se existe em estoque
    - Calcula o total da Venda
    - Valida se o cliente tem saldo pra finalizar a compra
    - Abate o valor da venda no saldo do cliente e a quantidade vendida no estoque do produto
*/

#include <stdio.h>
#include <locale.h>
#include <string.h>

#define qtdClientes 5
#define qtdProdutos 5
#define qtdVendas 5

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

} dadosDaVenda;

void cadastrarCliente(dadosDosClientes *p)
{
    printf("Digite seu nome por favor: \n");
    fgets(p->nome, sizeof(p->nome), stdin);
    p->nome[strcspn(p->nome, "\n")] = '\0';
    getchar();

    printf("Digite a idade: ");
    scanf("%d", p->idade);
    getchar();

    printf("Digite seu ccódigo: ");
    scanf("%d", p->codigo);
    getchar();

    printf("Digite seu saldo: ");
    scanf("%f", p->saldo);
    getchar();
}

void cadastrarProduto(dadosDosProdutos *g)
{
    printf("Descreva o produto por favor: \n");
    fgets(g->descricao, sizeof(g->descricao), stdin);
    g->descricao[strcspn(g->descricao, "\n")] = '\0';
    getchar();

    printf("Digite o valor do produto: \n");
    scanf("%f", g->valorDoProduto);
    getchar();
    
    printf("Digite a quantidade do produto: \n");
    scanf("%d", g->quantidade);
    getchar();
}


void validar_codigo(int codProd,)
{
    if (pesquisa_codigo == p->codigo)
    {
        
    }
    
}

void cadastrarVendas(dadosDosClientes *c, dadosDosProdutos *v)
{
    int codProd;
    printf("digite o codigo do produto");
    scanf("%d", &codProd);
    validar_codigo(codProd, );
}


void exibirvenda();

int main() 
{

    setlocale(LC_ALL, "Portuguese_Brazil");
    dadosDosClientes clientes [qtdClientes];
    dadosDosProdutos produtos [qtdProdutos];
    dadosDaVenda vendas [qtdVendas];

    int totalClientes = 0, totalProdutos = 0, totalVendas = 0;
    int opcao;

    do
    {
        printf("Escolha uma opção:\n1. Cadastrar cliente\n2. Cadastrar Produto\n3. Vender para cliente\n4. Listar todas as vendas\n5. Listar todos os clientes\n6. Encerrar");
        scanf("%d", &opcao);
        getchar();

        switch (opcao)
        {
        case 1:
            if (totalClientes >= qtdClientes)
            {
                printf("A quantidade de clientes já esta no limite");
            }else
            {
               cadastrarCliente()
            }           
            
            break;

        case 2:
            break;

        case 3:
            break;

        case 4:
            break;

        case 5:
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