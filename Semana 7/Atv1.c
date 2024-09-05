/* Teste com Ponteiros */

#include <stdio.h>

void soma (int *a, int *b, int *result) {
    *a = 100;
    *result = *a + *b;
}

int main () {

    int var1 = 10, var2 = 20, resultado;

    soma(&var1, &var2, &resultado);

    printf("Resultado: %d\n", resultado);    
    printf("VAR1: %d", var1);    

}