/*
    Escreva um programa em C que receba o nome do modelo de 
    4 carros e seus valores de FIPE.

    O programa deverá retornar o carro mais caro e o mais barato.
*/

#include <stdio.h>
#include <locale.h>

#define qtdCarros 4

int main () {
    setlocale(LC_ALL, "Portuguese_Brazil");

    char modelos[qtdCarros][10];
    float precos[qtdCarros];

    for (int i = 0; i < qtdCarros; i++) {
        printf("Informe o modelo do carro: ");
        scanf("%9[^\n]s", modelos[i]);
        getchar();

        printf("Informe o valor do veiculo: ");
        scanf("%f", &precos[i]);
        getchar();
    }

    float menorPreco = 0.0, maiorPreco = 0.0;
    int idMaior, idMenor;

    for (int i = 0; i < qtdCarros; i++) {
        if (precos[i] > maiorPreco)
        {
            maiorPreco = precos[i];
            idMaior = i;
        }

        if (precos[i] < menorPreco || menorPreco == 0.0)
        {
            menorPreco = precos[i];
            idMenor = i;
        }        
    }

    printf("O carro mais caro é: %s, com valor de: %.2f", modelos[idMaior], maiorPreco);
    printf("\nO carro mais barato é: %s, com valor de: %.2f", modelos[idMenor], menorPreco);

    return 0;
}