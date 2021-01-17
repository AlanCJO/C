#include <stdio.h>
#define alturaMaxima 225

// criando uma estrutura em C similar ao que se vê em uma classe
// typedef serve para dar nome a um tipo
typedef struct
{ 
    int peso;    // peso em quilogramas
    int altura; // altura em centimetros
} PesoAltura;


int main()
{   
    int x;
    PesoAltura pessoa1;
    pessoa1.peso = 80;
    pessoa1.altura = 185;

    printf("\nPeso: %i, Altura %i. \n", pessoa1.peso, pessoa1.altura);

    if (pessoa1.altura > alturaMaxima) printf("Altura acima da máxima!\n");     
    else printf("Altura abaixo da máxima!\n");

    printf("%p %p %p\n", &x, &pessoa1, &(pessoa1.altura));

    return 0;
}


