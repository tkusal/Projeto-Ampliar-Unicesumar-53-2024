/*
    Escreva um algortimo que receba um número e escreva na tela a 
    tabuada de multiplicação deste número.
*/

#include <stdio.h>

int main() {

    int num;

    printf("Informe um numero: ");
    scanf("%d", &num);

    for (int x = 0; x < 11; x++ ) {
        printf("%d x %d = %d\n", num, x, x*num);
    }

    return 0;
}