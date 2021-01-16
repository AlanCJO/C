#include <stdio.h>

int main() 
{
    char Ch;
    Ch = getchar();
    putchar(Ch);
    printf("\nVocê pressionou a tecla %c\n", Ch);
    
    /*
    // sem usar o getchar
    char Ch;
    scanf("%c", &Ch);
    putchar(Ch);
    printf("\nVocê pressionou a tecla %c\n", Ch);
    */

    return 0;
}