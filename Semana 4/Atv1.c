/*
    Escreva um programa que armazene 5 idades em um vetor.
    Como saída, deverá informar quem é a pessoal mais velha.
*/

#include <stdio.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "Portuguese");

    int idades[5], maioridade = 0;

    for(int i = 0; i < 5; i++) {
        printf("Informe uma idade: ");
        scanf("%d", &idades[i]);
    }

    for(int i = 0; i < 5; i++) {
        if (idades[i] > maioridade) {
            maioridade = idades[i];
        }
    }

    printf("Maior idade: %d", maioridade);

    return 0;
}