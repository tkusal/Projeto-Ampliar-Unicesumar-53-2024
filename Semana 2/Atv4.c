/*
    Escreva um programa que faça uma conta básica.
    O usuário deverá escolher o tipo de operação, sendo:

    1. Soma
    2. Subtração
    3. Multiplacação
    4. Divisão
*/

#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese");

    int opc, erro = 0;
    float numero1, numero2, resultado;

    printf("Esolha uma operação: \n");
    printf("1. Soma\n2. Subtração\n3. Multiplacação\n4. Divisão\n");
    scanf("%d", &opc);

    if (opc > 0 && opc < 5) {
        printf("Primeiro numero: ");
        scanf("%f", &numero1);
        
        printf("Segundo numero: ");
        scanf("%f", &numero2);
    }    

    switch(opc) {
        case 1:
            resultado = numero1 + numero2;
            break;
        case 2:
            resultado = numero1 - numero2;
            break;
        case 3:
            resultado = numero1 * numero2;
            break;
        case 4:
            if (numero2 != 0) {
                resultado = numero1 / numero2;
            } else {
                printf("Não é possível fazer divisão por zero.\n");
                return 1;
            }
            break;            
        default:
            printf("Opção inválida");
            return 1;
            break;
    }

    printf("Resultado = %.2f", resultado);

    return 0;
}