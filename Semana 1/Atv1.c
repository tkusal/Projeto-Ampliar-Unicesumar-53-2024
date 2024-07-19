/*
    Escreva um programa que some dois números inteiros
*/

#include <stdio.h>

int main() {

    int numero1;
    int numero2;
    int result;

    printf("Insira o primeiro numero inteiro: \n");
    scanf("%d", &numero1);
    
    printf("Insira o segundo numero inteiro: \n");
    scanf("%d", &numero2);

    result = numero1 + numero2;

    printf("O resultado da soma e: %d \n", result);

    return 0;
}