/*
    Complete o código abaixo com uma estrutura condicional informando se o IMC da pessoa
    está abaixo do peso, no peso adequado, acima do peso ou em obesidade.
*/

#include <stdio.h>
#include <locale.h>

int main(){
    
    setlocale(LC_ALL,  "Portuguese");
    float altura, peso, imc;

    printf("Informe sua altura (em metros): ");
    scanf("%f", &altura);

    printf("Informe seu peso (em kg): ");
    scanf("%f", &peso);

    imc = peso / (altura * altura);
    printf("IMC: %.2f - ", imc);

    if (imc < 18.4){
        printf("Você está abaixo do peso adequado!");
    }
    else if (imc < 24.9){
        printf("Você está no peso adequado!");
    }
    else if  (imc < 29.9){
        printf("Você está acima do peso!");
    }
    else{
        printf("Você está com  obesidade grau I!");
    }

    
    return 0;
}
