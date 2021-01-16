#include <stdio.h>

int main() 
{
    int num;
    printf("Digite um número: ");
    scanf("%d", &num);

    if (num > 10) printf("\nO número é maior que 10!");
    else if (num == 10) {
        printf("\nVocê acertou!\nO número é igual a %d!", num);
    } else {
        printf("\nO número é menor que 10!");
    }   

    printf("\n");
    return 0;
}