// Programa recebe os termos da equação de segundo grau
// E calcula as raízes que zeram a equação
// Informe o primeiro termo a, da equação
// A equação de segundo grau possui 3 termos o primeiro a, o segundo b e o terceiro c
// Ex: ax²+bx+c
#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <string.h>
int main (){
    setlocale(LC_ALL, "Portuguese");
    float primeiroTermo, segundoTermo, terceiroTermo, delta, primeiraRaiz, segundaRaiz;
    
    printf("Para encontrar a raíz da equação quadrática formato ax²+bx+c, nos informe o valor dos termos a seguir. \n");

    printf("Insira o número referente ao primeiro termo 'a'. Caso X² esteja sozinho digite 1: ");
    scanf("%f", &primeiroTermo);

    if(primeiroTermo!=0) {
    printf("Insira o número referente ao segundo termo 'b'.\n Caso X esteja sozinho digite 1: ");
    scanf("%f", &segundoTermo);

    printf("Insira o número referene ao terceiro termo 'c': ");
    scanf("%f", &terceiroTermo);

    
    delta = (segundoTermo*segundoTermo)-4*primeiroTermo*terceiroTermo;

    if(delta>0){
        primeiraRaiz = (-segundoTermo+sqrt(delta))/(2*primeiroTermo);
        segundaRaiz = (-segundoTermo-sqrt(delta))/(2*primeiroTermo);
        printf("Essa equação possui duas raízes reais. O valor de X' é: %.2f, e o valor de X'' é: %.2f", primeiraRaiz, segundaRaiz);
    }
    else if(delta<0){
        printf("Não possui raiz real");
    }
    else {
        primeiraRaiz = (-segundoTermo+sqrt(delta))/(2*primeiroTermo);
        printf("O valor de X é %.2f", primeiraRaiz);
    }

} else{
    printf("O primeiro termo não pode ser igual a zero");
}

    return 0;
}