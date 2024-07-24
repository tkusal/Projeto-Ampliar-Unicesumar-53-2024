/*
    Escreva um programa que calcule a área de um quadrado.
    Fórmula: lado²
*/

#include <stdio.h>

int main() {

    float lado;

    printf("Informe a medida do lado: ");
    scanf("%f", &lado);

    float area = lado*lado;

    printf("Area = %.2f", area);

    return 0;
}