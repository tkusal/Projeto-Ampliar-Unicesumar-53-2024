#include <stdio.h>

int main() {

    int num = 0;
    int num2 = 0;

    for (int x = 1; x <= 10; x++ ) {
        // ++ atrás da variável, ele primeiro exibe o valor, depois incrementa
        printf("++ atras: %d --- ", num++);
        // ++ em frente a variável, primeiro ele incrementa, depois exibe o valor
        printf("++ em frente: %d \n", ++num2);
    }

    return 0;
}