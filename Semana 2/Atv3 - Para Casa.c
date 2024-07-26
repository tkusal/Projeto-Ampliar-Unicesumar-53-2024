/*
    Complete o código abaixo com uma estrutura condicional informando se o IMC da pessoa
    estão abaixo do peso, no peso adequado, acima do peso ou em obesidade.
*/

#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portugues");

    float altura, peso, imc;

    printf("Informe sua altura (em metros): ");
    scanf("%f", &altura);

    printf("Informe seu peso (em kg): ");
    scanf("%f", &peso);

    imc = peso / (altura * altura);
    printf("IMC: %.2f - ", imc);

    //Inicie Aqui

    if (imc < 18.5)
    {
        printf("Abaixo do peso");
    }
    else if (imc < 25) {
        printf("Peso normal");
    } else if (imc < 30) {
        printf("Sobrepeso");
    }
    else
    {
        printf("Obesidade");
    }

    return 0;
}