/*
    Um programa que receba um número e retorne a pontencia por 2 (x²)
    O programa precisa perguntar ao usuário se ele deseja encerrar 
    ou calcular outro número
*/

#include <stdio.h>

int main() {

    int numero;
    char opc;    

    do {
        printf("Informe o numero que deseja potencializar: ");
        scanf("%d", &numero);
        getchar();

        printf("Resposta: %d\n", numero*numero);

        printf("Deseja calcular outro numero? (s/n)\n");
        scanf("%c", &opc);
        getchar();

    } while(opc != 'n' && opc != 'N');

    return 0;
}
