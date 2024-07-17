/*
    Escreva um programa que some dois n�meros inteiros
*/

#include <stdio.h>

int main() {
    int num1, num2, result;

    printf("Soma de dois números inteiros\n");

    printf("Digite o primeiro número inteiro: ");
    scanf("%d",&num1);

    printf("Digite o segundo número inteiro: ");
    scanf("%d",&num2);

    result = num1 + num2;

    printf("A Soma dos números é igual a: %d\n", result);

    return 0;

}