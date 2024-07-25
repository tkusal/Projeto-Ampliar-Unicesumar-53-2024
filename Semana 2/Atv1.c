/*
    Escreva um programa que receba a idade de 2 pessoas e informe qual a mais velha.
*/

#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese");
    int idade1, idade2;

    printf("Informe primeira idade: ");
    scanf("%d", &idade1);

    printf("Informe segunda idade: ");
    scanf("%d", &idade2);

    if (idade1 > idade2) {
        printf("Primeira idade é maior: %d", idade1);
    }
    else if(idade1 == idade2) {
        printf("As idades sðo iguais");
    }
    else {
        printf("Segunda idade é maior: %d", idade2);
    }

    return 0;
}