#include <stdio.h>

int main() 
{
    // Exemplo.: Suponha que a, b e c são variáveis inteiras e veja uma maneira de fazer "c = a+b"

    // definindo um ponteiro p e q de inteiros
    int *p, *q;
    // definindo a, b e c como inteiros
    int a, b, c; 

    // usando a função scanf para receber dois inputs do teclado para as variáveis a e b
    scanf("%d%d", &a, &b);

    // armazenando o endereço na memória de a e b em p e q, respectivamente    
    p = &a; 
    q = &b;
    c = *p + *q;

    // checando os endereços na memória
    printf("\nEndereço na memória de a          = %p\n", (void *) &a);
    printf("Endereço na memória do ponteiro p = %p\n", (void *) p);
    printf("\n");
    printf("Endereço na memória de b          = %p\n", (void *) &b);
    printf("Endereço na memória do ponteiro q = %p\n", (void *) q);


    printf("\n%d + %d = \033[1;31m%d\n\n", a, b, c);
    return 0;
}