#include <stdio.h>

int main()
{
    int Dias; // Declaração de Variáveis
    float Anos;

    printf("\nEntre com o número de dias: "); // Entrada de dados
    scanf("%d", &Dias);                     // Lê do teclado - %d diz que iremos ler um inteiro do teclado
    Anos = Dias / 365.25;                   // Conversão de dias em anos
    printf("\n%d dias equivalem a %5.2f anos.\n\n", Dias, Anos);
    return 0;
}