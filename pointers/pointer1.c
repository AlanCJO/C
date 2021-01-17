#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
    typedef struct 
    {
        int dia, mes, ano;
    } data;
    printf("sizeof (data) = %ld\n", sizeof(data));  

    return EXIT_SUCCESS;
}