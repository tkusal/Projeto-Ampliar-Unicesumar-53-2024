/*
    Escreva um programa em C para resolver a fórmula de Bhaskara.
    
    Entrada de dados: Valor de A, B e C.
    Processamento: Calcular o delta e o valor das raizes (Bhaskara)
    Saída: Imprimir o valor da raiz real

    Veja mais sobre a fórmula de Bhaskara em: https://www.todamateria.com.br/formula-de-bhaskara/
    teste
*/

#include <stdio.h>
#include <math.h>
#include <locale.h>

int main () {
    
    setlocale(LC_ALL, "Portuguese");
    
    float A, B, C, Delta, X1, X2;
    
    printf("Digite o valor de A: ");
    scanf("%f", &A);
    
    printf("Digite o valor de B: ");
    scanf("%f", &B);
    
    printf("Digite o valor de C: ");
    scanf("%f", &C);
    
    Delta = (B * B) - 4 * A * C;
    
    X1 = (- B + sqrt(Delta)) / (2 * A);
    X2 = (- B - sqrt(Delta)) / (2 * A);

    printf("A: %.2f \n", A);
    printf("B: %.2f \n", B);
    printf("C: %.2f \n", C);
    printf("Delta: %.2f \n", Delta);
    printf("X1: %2.f \n", X1);
    printf("X2: %2.f \n", X2);
    
    return 0;
    
}
