/*
    Refatore o código abaixo, para informar na saída o valor da segunda menor
    e segunda maior idade.
*/

#include <stdio.h>

int main()
{

    int idade, menorIdade, maiorIdade;
    int segMenorIdade, segMaiorIdade;

    for (int i = 1; i <= 6; i++)
    {
        printf("Insira uma idade: ");
        scanf("%d", &idade);

        if (i == 1)
        {
            menorIdade = idade;
            maiorIdade = idade;
            segMaiorIdade = idade;
            segMenorIdade = idade;
        }

        if (idade < menorIdade) {
            segMenorIdade = menorIdade;
            menorIdade = idade;
        } else if (idade < segMenorIdade) {
            segMenorIdade = idade;
        }

        if (idade > maiorIdade) {
            segMaiorIdade = maiorIdade;
            maiorIdade = idade;
        } else if (idade > segMaiorIdade) {
            segMaiorIdade = idade;
        }
    }

    printf("A menor idade é: %d ", menorIdade);
    if (menorIdade < 18) {
        printf("e é menor de 18.\n");
    } else {
        printf("e é maior de 18.\n");
    }

    printf("A segunda menor idade é: %d\n", segMenorIdade);

    printf("A maior idade é: %d ", maiorIdade);
    if (maiorIdade < 18) {
        printf("e é menor de 18.\n");
    } else {
        printf("e é maior de 18.\n");
    }

    printf("A segunda maior idade é: %d\n", segMaiorIdade);

    return 0;
}