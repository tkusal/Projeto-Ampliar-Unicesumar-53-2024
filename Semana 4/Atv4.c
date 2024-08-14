/*
    Escreva um programa que receba 2 notas de 5 alunos.
    O programa deverá ter como saída, a média dos 5 alunos.

    Utilize uma matriz 5x3 para esta atividade.
*/

#include <stdio.h>

int main() {
    float notas[5][3];

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 2; j++) {
            printf("Informe uma nota: \n");
            scanf("%f", &notas[i][j]);
        }
    }

    for (int i = 0; i < 5; i++) {
        notas[i][2] = (notas[i][0] + notas[i][1])/2;
    }

    for (int i = 0; i < 5; i++) {
        if (notas[i][2] >= 6) {
            printf("Media: %f - Aprovado", notas[i][2]);
        } else {
            printf("Media: %f - Reprovado", notas[i][2]);
        }
    }

    return 0;
}