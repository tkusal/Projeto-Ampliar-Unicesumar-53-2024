/*
    Complete o código abaixo com uma estrutura condicional informando se o IMC da pessoa
    está abaixo do peso, no peso adequado, acima do peso ou em obesidade.
*/

#include <stdio.h>

int main() {

    float altura, peso, imc;

    printf("Informe sua altura (em metros): ");
    scanf("%f", &altura);

    printf("Informe seu peso (em kg): ");
    scanf("%f", &peso);

    imc = peso / (altura * altura);

    //Inicie Aqui

    return 0;
}