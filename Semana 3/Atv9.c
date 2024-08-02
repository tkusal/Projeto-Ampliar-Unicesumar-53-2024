/*
    Escreva um código que exiba na tela um menu com as opções:

    1. Somar 2 numeros
    2. Multiplicar 2 numeros
    3. Encerrar

    O programa só poderá ser finalizado quando o usuário escolher a opção 3
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    int opcao;
    float num1, num2, resultado;

    do
    {
        printf("Escolha uma das opções:\n1. Somar 2 numeros\n2. Multiplicar 2 numeros\n3. Encerrar\n");
        scanf("%d", &opcao);

        if (opcao == 1 || opcao == 2) {
            printf("Digite o primeiro numero: ");
            scanf("%f", &num1);
            printf("Digite o segundo numero: ");
            scanf("%f", &num2);
        }    

        switch (opcao)
        {
        case 1:
            resultado = num1 + num2;
            printf("Resultado: %.2f\n", resultado);
            break;
        case 2:
            resultado = num1 * num2;
            printf("Resultado: %.2f\n", resultado);
            break;
        case 3:
            return 0;
            break;
        default:
            printf("Opção inválida.\n");
            break;
        }

    } while (1);
}