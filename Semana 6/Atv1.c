/*
    Escreva uma calculadora em C, com as 4 operações aritméticas.
    Onde cada operação deverá ser em uma sub-rotina diferente.
    Escreva uma subrotina para saída de dados.
    O programa deverá ser um menu de 5 opções, onde:
    1. Soma
    2. Subtração
    3. Divisão
    4. Multiplicação
    5. Sair
*/

#include <stdio.h>
#include <locale.h>

void saida(float result)
{
    printf("Resultado: %.2f\n\n", result);
}

void soma(float n1, float n2)
{
    float result = n1 + n2;
    saida(result);
}

void subtracao(float n1, float n2)
{
    float result = n1 - n2;
    saida(result);
}

void div(float n1, float n2)
{
    float result = n1 / n2;
    saida(result);
}

void multipl(float n1, float n2)
{
    float result = n1 * n2;
    saida(result);
}

float entrada(char string[])
{
    float num;
    printf("Informe o %s numero: ", string);
    scanf("%f", &num);
    return num;
}

int main()
{
    setlocale(LC_ALL, "portuguese");

    int opc;
    float num1, num2;

    do
    {
        printf("Escolha uma operaçao:\n");
        printf("1. soma\n2. subtraçao\n3. divisao\n4. multiplicaçao\n5. Sair");
        scanf("%d\n", &opc);

        switch (opc)
        {
        case 1:
            num1 = entrada("primeiro");
            num2 = entrada("segundo");
            soma(num1, num2);
            break;
        case 2:
            num1 = entrada("primeiro");
            num2 = entrada("segundo");
            subtracao(num1, num2);
            break;
        case 3:
            num1 = entrada("primeiro");
            num2 = entrada("segundo");
            div(num1, num2);
            break;
        case 4:
            num1 = entrada("primeiro");
            num2 = entrada("segundo");
            multipl(num1, num2);
            break;
        case 5:
            return 0;
            break;
        default:
            printf("Opção inválida\n\n");
            break;
        }
    } while (1);
}