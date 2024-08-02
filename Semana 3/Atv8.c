/*
    Escreva um programa que apresente em ordem decrescente todos os números multiplos de 7, iniciando em 100
*/

#include <stdio.h>

int main () {

    for(int i = 100; i >= 0; i--) {
        if (i%7 == 0) {
            printf("%d \n", i);
        }
    }

    return 0;
}