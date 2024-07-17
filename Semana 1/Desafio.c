/*
    Escreva um algoritmo que leia o nome de um aluno e suas duas notas de matem�tica.
    Ent�o, escreva na tela o nome e a m�dia do aluno.
*/

#include <stdio.h>

int main() {
    float nota1, nota2, media;
    char full_name[50];

    printf("Calcular media do Aluno.\n\n");

    printf("Digite o nome completo do aluno: ");
    scanf("%[^\n]s", &full_name);

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    media = (nota1 + nota2)/2;

    printf("A media de %s é: %.2f\n",full_name, media);

    return 0;
}