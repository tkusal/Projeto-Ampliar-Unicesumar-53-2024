/*
    Escreva um programa que receba o salário de um funcionário e
    calcule quanto ele precisa pagar de imposto de renda (aliquota 25%)
*/

#include <stdio.h>

int main() {

    float salario, valorImposto, valorLiquido;

    printf("Digite o salario: ");
    scanf("%f", &salario);

    valorImposto = salario * 25/100;
    valorLiquido = salario - valorImposto;

    printf("O imposto e de: %.2f \nO salario liquido e de: %.2f", valorImposto, valorLiquido);
    
    return 0;
}