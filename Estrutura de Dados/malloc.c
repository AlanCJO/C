#include <stdio.h>
#include <malloc.h>

int main() {

    // a função malloc aloca uma quantidade de memória
    int *y = (int*) malloc(sizeof(int)); // é feito o cast com (int*) para o compilador entender que é um ponteiro do tipo inteiro
    *y = 20; // ir na memória contada por y e atribuir 20
    int z = sizeof(int);
    printf("*y = %i z = %i\n", *y, z);

    return 0;
}