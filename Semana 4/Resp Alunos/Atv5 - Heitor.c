/*
    Escreva um programa que receba 9 numeros e os armazene em uma matriz 3x3.
    A saí­da do programa deverá ser a soma dos numeros da diagonal.
*/

#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    float matriz[3][3], soma, soma2;

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("Informe um numero: ");
            scanf("%f", &matriz[i][j]);
        }
    }
    for(int i = 0; i < 3; i++){
        soma = matriz[0][0] + matriz[1][1] + matriz[2][2];
        soma2 = matriz[2][0] + matriz[1][1] + matriz[0][2];
    }
    printf("A soma dos numeros da diagonal esquerda superior até a direita inferior é: %.2f \n", soma);
    printf("A soma dos numeros da diagonal esquerda inferior até a direita superior é: %.2f", soma2);

    return 0;
}