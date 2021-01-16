#include <stdio.h>

int main() {
    char a;

    printf("\nDigite um caractere e veja-o em decimal, octal e hexadecimal: ");
    scanf("%c", &a);

    printf("\n%c = %d em decimal, %o em octal e %x em hexadecimal.\n", a, a, a, a);

    return 0;
}