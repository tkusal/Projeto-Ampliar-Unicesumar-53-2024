/*
    Escreva um programa em C para resolver a fórmula de Bhaskara.
    
    Entrada de dados: Valor de A, B e C.
    Processamento: Calcular o delta e o valor das raizes (Bhaskara)
    Saída: Imprimir o valor da raiz real

    Veja mais sobre a fórmula de Bhaskara em: https://www.todamateria.com.br/formula-de-bhaskara/

    Se o valor de Δ for maior que zero (Δ > 0), a equação terá duas raízes reais e distintas.

    Se o valor de Δ for igual a zero (Δ = 0), a equação apresentará uma raiz real.

    Se o valor de Δ for menor que zero (Δ<0), a equação não possui raízes reais.

*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>

int main () {
    
    setlocale(LC_ALL, "Portuguese");
    
    // system("clear");
    system("cls");
    
    float A, B, C, Delta, X1, X2;
    
    printf("Digite o valor de A: ");
    scanf("%f", &A);
    
    printf("Digite o valor de B: ");
    scanf("%f", &B);
    
    printf("Digite o valor de C: ");
    scanf("%f", &C);
    
    // system("clear");
    system("cls");
    
    Delta = (B * B) - 4 * A * C;
    
    if(Delta > 0){
        X1 = (- B + sqrt(Delta)) / (2 * A);
        X2 = (- B - sqrt(Delta)) / (2 * A);
    } else if(Delta = 0){
        X1 = - B / (2 * A);
        X2 = 0;
    } else if(Delta < 0){
        X1 = 0;
        X2 = 0;
    }  
    

    printf("A: %.2f \n", A);
    printf("B: %.2f \n", B);
    printf("C: %.2f \n", C);
    printf("Delta: %.2f \n", Delta);
    printf("X1: %2.f \n", X1);
    printf("X2: %2.f \n", X2);
    
    return 0;
    
}