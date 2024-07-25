/*
    Escreva um programa que receba a média de um aluno e
    informe se ele está aprovado (>=6) ou reprovado
*/

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    float media;

    printf("Informe a média: ");
    scanf("%f", &media);

    if (media >= 6) {
        printf("Aluno aprovado");
    }
    else {
        printf("Aluno reprovado");
    }

    return 0;
}