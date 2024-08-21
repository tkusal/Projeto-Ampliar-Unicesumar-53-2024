/*
    Escreva um programa que receba 9 numeros e os armazene em uma matriz 3x3.
    A saída do programa deverá ser a soma dos numeros da diagonal.
*/

#include <stdio.h>

int main () {
    int array[3][3];
    int soma = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Insira um numero ([%d][%d]): ", i, j);
            scanf("%d", &array[i][j]);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        soma += array[i][i];
    }

    /*
    for (int L = 0; L < 3; L++) {
        for (int C = 0; C < 3; C++) {
                soma += array[L][C];
        }
    }
    */

    printf ("Soma da Diagnoal: %d", soma);

    return 0;
}