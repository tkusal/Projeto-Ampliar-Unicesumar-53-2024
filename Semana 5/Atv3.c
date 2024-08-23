/*
    Crie um programa em C que receba 3 carros 
    (Código, Fabricante, Modelo, Ano e Valor) de uma locadora.
    Todos os carros tem uma depreciação de 10% ao ano.
    O programa deve calcular a depreciação de cada carro e informar qual perdeu mais valor.
*/

#include <stdio.h>
#include <locale.h>
#include <string.h>

#define qtCarros 3

struct tipoCarro {
    int cod, ano;
    char fabricante[10], modelo[15];
    float valor, valorInicial, depreciacao, porcentDepre;
};

int main () {
    setlocale(LC_ALL, "Portuguese_Brazil");

    int anoAtual = 2024;
    struct tipoCarro carros[qtCarros];

    for (int i = 0; i < qtCarros; i++) {
        printf("Informe o modelo do carro: ");
        fgets(carros[i].modelo , sizeof(carros[i].modelo), stdin);
        carros[i].modelo[strcspn(carros[i].modelo, "\n")] = '\0';
        getchar();

        printf("Informe o fabricante do carro: ");
        fgets(carros[i].fabricante, sizeof(carros[i].fabricante), stdin);
        carros[i].fabricante[strcspn(carros[i].fabricante, "\n")] = '\0';
        getchar();

        printf("Informe o codigo do carro: ");
        scanf("%d", &carros[i].cod);
        getchar();

        printf("Informe o ano do carro: ");
        scanf("%d", &carros[i].ano);
        getchar();

        printf("Informe o valor do carro: ");
        scanf("%f", &carros[i].valor);
        getchar();
        carros[i].valorInicial = carros[i].valor;
    }

    float maiorDepre = 0.0;
    int idc;

    for (int i = 0; i < qtCarros; i++) {
        for (int j = carros[i].ano+1; j <= anoAtual; j++) {
            carros[i].depreciacao = carros[i].valor * 0.1;
            carros[i].valor -= carros[i].depreciacao;
        }

        carros[i].porcentDepre = carros[i].valor * 100 / carros[i].valorInicial;
        carros[i].porcentDepre = 100 - carros[i].porcentDepre;

        if (carros[i].porcentDepre > maiorDepre) {
            maiorDepre = carros[i].porcentDepre;
            idc = i;
        }
    }

    printf("O carro com maior depreciação é: %s %s", carros[idc].fabricante, carros[idc].modelo);

    return 0;
}