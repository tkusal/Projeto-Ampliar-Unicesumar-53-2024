/*
    Desenvolva um programa que receba notas de alunos.
    Caso o usuário informe uma nota menor que zero, o programa deverá ser encerrado.
*/

#include <stdio.h>

int main() {

    float nota;

    do {
        printf("Informe um nota: ");
        scanf("%f", &nota);
        printf("Nota informada: %.2f\n", nota);
    } while(nota >= 0);

    return 0;
}