/*
    Escreva um programa que receba e armazene 5 numeros inteiros em um vetor.
    O programa deverá ordenar esses numeros em ordem crescente.
    E depois, escreve-los na tela.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    
    setlocale(LC_ALL, "Portuguese");
    
    int vetor[5], atual, j;
    
    for (int i = 0; i < 5; i++) {
        
        // system("clear");
        system("cls");
        
        printf("Digite o %dº número: ", i+1);
        scanf("%d", &vetor[i]);
        
    }
    
    // system("clear");
    system("cls");
    
    // Exibe o vetor na ordem em que o usuário digitou
    for (int i = 0; i < 5; i++){
        
        if(i == 0){
            
            printf("ORDEM DIGITADA \n");
            printf("%d => ", vetor[i]);
            
        } else if(i == 4){
            
            printf("%d \n \n", vetor[i]);
            
        } else {
            
            printf("%d => ", vetor[i]);
            
        }
        
    }

    // Organiza o vetor em ordem crescente
    for (int i = 0; i < 5; i++) {

        j = 0;

        while (j < 5){
 
            if (vetor[i] < vetor[j]) {

                atual = vetor[i];

                vetor[i] = vetor[j];

                vetor[j] = atual;
                
                j = 0;

            } else {

                j++;

            }
            
        }

    }
    
    // Exibe o vetor em ordem crescente
    for (int i = 0; i < 5; i++){
        
        if(i == 0){
            
            printf("ORDEM CRESCENTE \n");
            printf("%d => ", vetor[i]);
            
        } else if(i == 4){
            
            printf("%d \n \n", vetor[i]);
            
        } else {
            
            printf("%d => ", vetor[i]);
            
        }
        
    }
    
    // Organiza o vetor em ordem descrescente
    for (int i = 0; i < 5; i++) {

        j = 0;

        while (j < 5){
 
            if (vetor[i] > vetor[j]) {

                atual = vetor[i];

                vetor[i] = vetor[j];

                vetor[j] = atual;
                
                j = 0;

            } else {

                j++;

            }
            
        }

    }
    
    // Exibe o vetor em ordem decrescente
    for (int i = 0; i < 5; i++){
        
        if(i == 0){
            
            printf("ORDEM DECRESCENTE \n");
            printf("%d => ", vetor[i]);
            
        } else if(i == 4){
            
            printf("%d", vetor[i]);
            
        } else {
            
            printf("%d => ", vetor[i]);
            
        }
        
    }
    
    return 0;
}