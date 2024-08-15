/*
    Escreva um programa que receba 9 numeros e os armazene em uma matriz 3x3.
    A saída do programa deverá ser a soma do numeros da diagonal.
*/

#include <stdio.h>

int main()
{
    int matriz [3][3],somar = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("digite o numero da matriz :\n");
            printf("--->");
            scanf("%d", &matriz[i][j]);
            if ( i == j)
            {
                somar += matriz[i][j];
            }
        }
    }
    for (int i = 0; i < 3; i++)
    {
        somar += (matriz[i][2 - 1]);
    }
    
    
    
        //somar = (matriz[0][0] + matriz [1][1]+ matriz[2][2]);
        //somar += (matriz[0][2] + matriz [1][1]+ matriz[2][0]);
    
    printf("\n %d",somar);


    return 0;
}
