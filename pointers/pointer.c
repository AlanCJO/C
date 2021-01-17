#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
    // Declaração variável e ponteiro
    int ano, *pAno;

    // Inicialização 
    ano = 2020;
    pAno = &ano;

    printf("\n%d\n", *pAno);
    // O valor de 'ano': 2020

    printf("%d\n", *&ano);
    // 2020 (também)

    // ld - long int, sizeof permite-nos ver o tamanho em bytes da variável
    printf("%ld bytes\n", sizeof(*pAno));

    // %p para endereços em notação hexadecimal, sendo necessário fazer o cast (void *)
    printf("Endereço na memória de ano   -> %p\n", (void *) &ano);

    printf("Conteúdo da variável pAno    -> %p\n", (void *) pAno);
    // Endereço de 'ano' também

    printf("Endereço na memória de &pAno -> %p\n", (void *)&pAno);
    // Endereço de 'pAno' <> 'ano'

    printf("\n");
    return EXIT_SUCCESS;
}