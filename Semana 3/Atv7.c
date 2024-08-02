/*
    Escreva um programa que imprima na tela todos os números pares entre 30 e 50.
*/

#include <stdio.h>

int main () {

    for (int i = 30; i <= 50; i+=2) {
        printf("%d \n", i);
    }

    return 0;
}