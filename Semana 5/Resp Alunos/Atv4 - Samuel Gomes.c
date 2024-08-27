/*
    Escreva um programa para controlar o estoque de uma loja de eletronicos.
    O programa deve consistir em um menu que permita:

    1. Cadastrar novo produto: O sistema deve suportar ate 15 produtos, em uma matriz 3x5. Cada produto deve possuir:
        a. Codigo
        b. Marca
        c. Descricao
        d. Preco
        e. Quantidade

    2. Alterar o preco de um produto: Deve permitir buscar um produto pelo codigo e alterar seu preco.

    3. Vender um Produto: Nesta opcao, informa o codigo do produto. Com isso, ele reduz a quantidade do produto
    e armazena o valor da venda em "saldo total". Necessario validar se existe o produto em estoque. Caso nao exista,
    ou seja, estoque = 0, informar que ja esgotou.

    4. Visualiza saldo total de vendas

    5. Encerrar o sistema
*/


#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

#define qtdProduto 15

struct tipoProduto {
    int codigo, quantidade;
    char marca[100], descricao[255];
    float preco;
};

int main () {

    setlocale(LC_ALL, "Portuguese");

    int opcao, i = 0, codigo;
    float totalVendas = 0.00;
    struct tipoProduto produto[qtdProduto];

    do {
        
        printf("1. Cadastrar novo produto\n");
        printf("2. Alterar o preco de um produto\n");
        printf("3. Vender um produto\n");
        printf("4. Visualizar saldo total de vendas\n");
        printf("5. Encerrar programa\n\n");
        printf("Digite uma opcao: ");
        scanf("%d", &opcao);
        getchar();
        printf("\n\n");

        system("cls");

        switch (opcao){
    
            case 1:
            
                // Valida o limite de produtos a serem cadastrados
                if(i + 1 <= qtdProduto) {
                    // Codigo (Autoincremento)
                    produto[i].codigo = i + 1;

                    // Marca
                    printf("Digite o nome da marca do produto: ");
                    fgets(produto[i].marca, sizeof(produto[i].marca), stdin);
                    produto[i].marca[strcspn(produto[i].marca, "\n")] = '\0';
                    getchar();
                    
                    system("cls");

                    // Descricao
                    printf("Digite a descricao do produto: ");
                    fgets(produto[i].descricao, sizeof(produto[i].descricao), stdin);
                    produto[i].descricao[strcspn(produto[i].descricao, "\n")] = '\0';
                    getchar();

                    system("cls");

                    // Preco
                    printf("Digite o preco do produto: ");
                    scanf("%f", &produto[i].preco);
                    getchar();

                    system("cls");

                    // Quantidade
                    printf("Digite a quantidade em estoque do produto: ");
                    scanf("%d", &produto[i].quantidade);
                    getchar();

                    system("cls");

                    printf("Produto cadastrado com sucesso!\n\n");
                    printf("Codigo: %d \n", produto[i].codigo);
                    printf("Marca: %s \n", produto[i].marca);
                    printf("Descricao: %s \n", produto[i].descricao);
                    printf("Preco: R$ %.2f \n", produto[i].preco);
                    printf("Quantidade: %d \n\n", produto[i].quantidade);

                    i++;

                } else {

                    printf("Nao foi possivel cadastrar um novo produto\n\n");

                }

                break;
            
            case 2:
            
                printf("Digite o codigo do produto que deseja alterar o preco: ");
                scanf("%d", &codigo);
                getchar();
                
                system("cls");
                
                for (int j = 0; j < i; j++) {
                    
                    if (produto[j].codigo == codigo) {
                        
                        system("cls");
                        
                        printf("Produto encontrado!\n\n");
                        printf("Codigo: %d \n", produto[j].codigo);
                        printf("Marca: %s \n", produto[j].marca);
                        printf("Descricao: %s \n", produto[j].descricao);
                        printf("Preco: R$ %.2f \n", produto[j].preco);
                        printf("Quantidade: %d \n\n", produto[j].quantidade);
                        
                        printf("Digite o novo preco: ");
                        scanf("%f", &produto[j].preco);
                        getchar();
                    
                        system("cls");
                    
                        printf("Preco alterado com sucesso!\n\n");
                    
                    } else {
                        
                        system("cls");
                        
                        printf("Produto nao encontrado!\n\n");
                        
                    }
                }
                
                break;
            
            case 3:
            
                printf("Digite o codigo do produto que deseja vender: ");
                scanf("%d", &codigo);
                getchar();
                
                system("cls");
                
                for (int j = 0; j < i; j++) {
                    
                    if (produto[j].codigo == codigo) {
                        
                        if(produto[j].quantidade == 0){
                            
                            printf("Estoque esgotado!\n\n");
                            
                        } else {
                            
                            totalVendas = totalVendas + produto[j].preco;
                            produto[j].quantidade = produto[j].quantidade - 1;
                            
                            system("cls");
                            
                            printf("Produto vendido com sucesso!\n");    
                            printf("Valor da venda: %.2f\n", produto[j].preco);
                            printf("Quantidade vendida: 1\n\n");
                        
                            
                        }
                        
                    
                    } else {
                        
                        system("cls");
                        
                        printf("Produto nao encontrado!\n\n");
                        
                        
                    }
                    
                }
                
                break;
            
            case 4:
            
                printf("Total de vendas atual: %.2f\n\n", totalVendas);
                break;
            
            case 5:
            
                // Encerrar programa
                printf("Programa encerrado!");
                return 0;
                break;
            
            default:
            
                printf("Opcao digitada invalida!\n\n");
                break;

        }

    } while (1);

}
