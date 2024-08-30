/*
    Você foi contratado por uma imobiliária para desenvolver um programa que receba até 5 imóveis.
    Cada imóvel possui:
        - Endereço
        - Cidade
        - Área
        - Valor
        - 1 proprietário
    Cada proprietário possui:
        - Nome
        - CPF
        - Telefone

    O programa consiste em um menu que só deve ser encerrado quando o usuário escolher a opção de sair.
    As operações apresentadas pelo programa devem ser:
        1. Cadastrar Imóveis
        2. Listar todos os imóveis em ordem decrescente de área
        3. Listar todos os imóveis em ordem crescente de valor
        4. Listar todos os proprietários
        5. Sair

        Obs.: O bubble sort pode lhe auxiliar na ordenação por área e por valor.
        Use subrotinas para segmentar seu código.
        Utilize VARIÁVEIS GLOBAIS para lhe facilitar em não utilizar ponteiros.
*/
#include <stdio.h>
#include <locale.h>
#include <string.h>

typedef struct
{
    char nome[30], cpf[16], telefone[14];
} dadosproprietario;

typedef struct
{
    char endereco[100];
    char cidade[50];
    float area;
    float valor;
    dadosproprietario dono;
} dadosImovel;

#define qtImoveis 5
int indice = 0;
dadosImovel imovel[qtImoveis];

void proprietario()
{
    printf("digite o nome do proprietario: \n");
    fgets(imovel[indice].dono.nome, sizeof(imovel[indice].dono.nome), stdin);
    imovel[indice].dono.nome[strcspn(imovel[indice].dono.nome, "\n")] = '\0';
    getchar();

    printf("digite o CPF do proprietario: \n");
    fgets(imovel[indice].dono.cpf, sizeof(imovel[indice].dono.cpf), stdin);
    imovel[indice].dono.cpf[strcspn(imovel[indice].dono.cpf, "\n")] = '\0';
    getchar();

    printf("digite o Telefone do proprietario: \n");
    fgets(imovel[indice].dono.telefone, sizeof(imovel[indice].dono.telefone), stdin);
    imovel[indice].dono.telefone[strcspn(imovel[indice].dono.telefone, "\n")] = '\0';
    getchar();

    indice++;
}

void cadastrar()
{
    if (indice >= qtImoveis)
    {
        printf("\n não tem mais imoves disponiveis");
    }
    else
    {
        printf("digite o Endereço: \n");
        fgets(imovel[indice].endereco, sizeof(imovel[indice].endereco), stdin);
        imovel[indice].endereco[strcspn(imovel[indice].endereco, "\n")] = '\0';
        getchar();

        printf("digite a Cidade: \n");
        fgets(imovel[indice].cidade, sizeof(imovel[indice].cidade), stdin);
        imovel[indice].cidade[strcspn(imovel[indice].cidade, "\n")] = '\0';
        getchar();

        printf("digite a Área\n");
        scanf("%f", &imovel[indice].area);
        getchar();

        printf("digite o valor\n");
        scanf("%f", &imovel[indice].valor);
        getchar();

        proprietario();
    }
}

void listarImoveisPorArea()
{
    // Listar todos os imóveis em ORDEM DECRESCENTE de ÁREA - Usa Bubble Sorte para ordernar
    dadosImovel num;
    printf("\nImaveis em ordem decresente de área:\n");
    for (int i = 0; i < indice; i++)
    {
        for (int j = 0; j < indice - i - 1; j++)
        {
            if (imovel[j].area < imovel[j + 1].area)
            {
                num = imovel[j];
                imovel[j] = imovel[j + 1];
                imovel[j + 1] = num;
            }
        }
    }

    for (int i = 0; i < indice; i++)
    {
        printf("endereço:%s\n", imovel[i].endereco);
        printf("cidade:%s\n", imovel[i].cidade);
        printf("area:%.2f\n", imovel[i].area);
        printf("valor:R$ %.2f\n", imovel[i].valor);
        printf("proprietario:%s\n", imovel[i].dono.nome);
        printf("cpf:%s\n", imovel[i].dono.cpf);
        printf("telefone: %s\n", imovel[i].dono.telefone);
        printf("--------------------------------------------");
    }
}

void listarImoveisPorValor()
{
    // Listar todos os imóveis em ORDEM CRESCENTE de VALOR - Usa Bubble Sorte para ordernar
    dadosImovel temp;
    for (int i = 0; i < indice; i++)
    {
        for (int g = 0; g < indice - i - 1; g++)
        {
            if (imovel[g].valor > imovel[g + 1].valor)
            {
                temp = imovel[g];
                imovel[g] = imovel[g + 1];
                imovel[g + 1] = temp;
            }
        }
    }

    printf("\nImaveis em ordem decresente de área:\n");
    for (int i = 0; i < indice; i++)
    {
        printf("endereço:%s\n", imovel[i].endereco);
        printf("cidade:%s\n", imovel[i].cidade);
        printf("area:%.2f\n", imovel[i].area);
        printf("valor:R$ %.2f\n", imovel[i].valor);
        printf("proprietario:%s\n", imovel[i].dono.nome);
        printf("cpf:%s\n", imovel[i].dono.cpf);
        printf("telefone: %s\n", imovel[i].dono.telefone);
        printf("--------------------------------------------");
    }
};

void listarProprietarios()
{
    for (int i = 0; i < indice; i++)
    {
        printf("Proprietário :%s\n", imovel[i].dono.nome);
        printf("cpf:%s\n", imovel[i].dono.cpf);
        printf("telefone:%s\n", imovel[i].dono.telefone);
        printf("--------------------------------------------");
    }
};

int main()
{
    int opcao;

    do
    {
        printf("Menu\n");
        printf("1. Cadastrar Um imovel\n");
        printf("2. lista de todos os imveis em ordem crescente de area\n");
        printf("3. lista de todos os imveis em ordem decrescente de valor\n");
        printf("4. Os proprietários\n");
        printf("5.Sair\n");
        printf("Meu nobre escolha um opcao:");
        scanf("%d", &opcao);
        getchar();

        switch (opcao)
        {
        case 1:
            cadastrar();
            break;
        case 2:
            listarImoveisPorArea();
            break;
        case 3:
            listarImoveisPorValor();
            break;
        case 4:
            listarProprietarios();
            break;
        case 5:
            printf("acabou..... e tetra!!!!\n");
            return 0;
            break;
        default:
            printf("Valor inválido");
            break;
        }

    } while (opcao !=5);
    
};
