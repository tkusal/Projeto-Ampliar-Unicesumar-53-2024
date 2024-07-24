/*
    Escreva um programa que leia o peso e altura de um atleta.
    O programa informar como saída o IMC do atleta.
    Fórmula:   IMC = peso / altura²
    Obs.: Peso precisa ser em Kilograma e Altura deverá ser em metros.
*/

#include <stdio.h>

int main() {

    float altura, peso, imc;

    printf("Informe sua altura (em metros): ");
    scanf("%f", &altura);

    printf("Informe seu peso (em kg): ");
    scanf("%f", &peso);

    imc = peso / (altura * altura);

    printf("Seu imc e: %.2f", imc);

    return 0;
}