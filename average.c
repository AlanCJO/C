// Biblioteca padrão do C - Standard input output
#include <stdio.h>

int main() {
    float n1, n2, average;

    printf("\nInsira a nota 1: ");
    scanf("%f", &n1);
    printf("Insira a nota 2: ");
    scanf("%f", &n2);

    average = (n1+n2)/2;
    printf("\nA sua média é %2.2f!", average);
    printf("\n\n");  

    if(average < 7) {
        printf("Com a média %2.2f, o aluno está reprovado!", average);
    } else {
        printf("Com a média %2.2f, o aluno está aprovado!", average);
    }

    printf("\n\n");  
    
    return 0;
}