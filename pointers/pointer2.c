#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int i = 1234;
    printf("\ni = %d\n", i);
    printf("&i  = %ld\n", (long int) &i);
    printf("&i  = %p\n", (void *) &i);

    return EXIT_SUCCESS;
}