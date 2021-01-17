#include <stdio.h>

int main() 
{
    int x = 25;
    int *y = &x;
    *y = 30; // vá na memória referenciada por y

    printf("\nValor atual de x: %i\n", x);
    printf("\n");
    return 0;
}

// A variável x é inicializada com valor 25.
// A variável y recebe o endereço onde está a variável x.
// Coloca-se o valor 30 na posição de memória referenciada(apontada) pelo endereço armazenado em y.
// Agora a variável x possui o valor passado através da variável y que aponta para seu endereço de memória