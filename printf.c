#include <stdio.h>

int main() {
    printf("Teste %% %%"); // Escape para %
    printf("\n");

    printf("%f", 40.345);  // ponto flutuante
    printf("\n");

    printf("Um caractere %c e um inteiro %d", 'D', 120); // Caractere e inteiro
    printf("\n");

    printf("%s é um exemplo", "Este"); // array de caracteres
    printf("\n");

    printf("%s%d%%", "Juros de ", 10);
    printf("\n");

    return 0;
}