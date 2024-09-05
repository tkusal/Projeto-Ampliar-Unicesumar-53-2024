/* Teste com Ponteiros */

#include <stdio.h>

int main () {

    int array[5] = {5, 10, 3, 4, 7};
    int *p;
    p = array;

    for (int i = 0; i < 5; i++) {
        printf("%d\n", *(p+i));
    }

    /*
    printf("Vetor: %p\n", array);
    printf("[0]: %p\n", &array[0]);
    printf("Vetor+1: %p\n", array+1);
    printf("[1]: %p\n", &array[1]);
    printf("[2]: %p\n", &array[2]);
    printf("[3]: %p\n", &array[3]);
    printf("[4]: %p\n", &array[4]);
    */
}