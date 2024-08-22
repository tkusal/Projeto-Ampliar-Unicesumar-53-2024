/*
    Escreva um programa em C que receba o nome do modelo de 
    4 carros e seus valores de FIPE. Desta vez, utilizando estrutura Heterogênea.

    O programa deverá retornar o carro mais caro e o mais barato.
*/

#include <stdio.h>
#include <locale.h>
#include <string.h>

#define qtdCarros 4

/*
typedef struct {
    char modelo[10];
    float preco;
} tipoCarros;
*/

struct tipoCarros
{
    char modelo[10];
    float preco;
};

int main () {
    setlocale(LC_ALL, "Portuguese_Brazil");

    //tipoCarros carros[qtdCarros];
    struct tipoCarros carros[qtdCarros];

    for (int i = 0; i < qtdCarros; i++) {
        printf("Informe o modelo do carro : ");
        fgets(carros[i].modelo, sizeof(carros[i].modelo), stdin);
        carros[i].modelo[strcspn(carros[i].modelo, "\n")] = '\0';
        getchar();

        printf("Informe o valor do carro : ");
        scanf("%f", &carros[i].preco);
        getchar();
    }

    float maiorPreco = 0.0, menorPreco = 0.0;
    int idMaior, idMenor;

    for (int i = 0; i < qtdCarros; i++) {
        if (carros[i].preco > maiorPreco)
        {
            maiorPreco = carros[i].preco;
            idMaior = i;
        }

        if (carros[i].preco < menorPreco || menorPreco == 0.0)
        {
            menorPreco = carros[i].preco;
            idMenor = i;
        }
    }

    printf("Carro de menor valor: %s, com valor de %.2f", carros[idMenor].modelo, carros[idMenor].preco);
    printf("\nCarro de maior valor: %s, com valor de %.2f", carros[idMaior].modelo, maiorPreco);
    return 0;
}