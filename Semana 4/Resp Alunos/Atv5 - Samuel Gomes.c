#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    
    setlocale(LC_ALL, "Portuguese");
    
    int matriz[3][3], soma = 0;
    
    // Insere os números digitados pelo usuário na matriz
    for (int i = 0; i < 3; i++){
        
        for (int j = 0; j < 3; j++){
            
            printf("Digite um número: ");
            scanf("%d", &matriz[i][j]);
            
            system("cls");
            //system("clear");
            
        }
        
    }
    
    // Exibe a matriz
    printf("MATRIZ \n");
    
    for (int i = 0; i < 3; i++){
        
        for (int j = 0; j < 3; j++){
            
            if (j == 2){
                
                printf("%d \n", matriz[i][j]);
                
            } else {
                
                printf("%d - ", matriz[i][j]);
                
            }
            
            // Calcula a soma dos números diagonais da esquerda para a direita
            if (i == j){
                
                soma = soma + matriz[i][j];
                
            }
            
        }
        
    }
    
    printf("\nSoma diagonal da esquerda para a direita: %d", soma);

    // Calcula a soma dos números diagonais da direita para a esquerda
    soma = 0;
    int j = 2;
    
    for (int i = 0; i < 3; i++){
        
        soma = soma + matriz[i][j];
        
        j--;
        
    }
    
    printf("\nSoma diagonal da direita para a esquerda: %d", soma);

    return 0;
}