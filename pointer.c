#include <stdio.h>

int main() 
{
    // Declaração variável e ponteiro
    int ano, *pAno;

    // Inicialização 
    ano = 2020;
    pAno = &ano;

    printf("%d\n", *pAno);
    // O valor de 'ano': 2020

    printf("%d\n", *&ano);
    // 2020 (também)

    // ld - long int, sizeof permite-nos ver o tamanho em bytes da variável
    printf("%ld bytes\n", sizeof(*pAno));

    printf("%d", &ano);
    // Endereço na memória de 'ano'

    // printf("%u", pAno);
    // Endereço de 'ano' também

    // printf("%u", &pAno);
    // Endereço de 'pAno' <> 'ano'

    return 0;
}