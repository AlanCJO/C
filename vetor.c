#include <stdio.h>

void main(void) {
    
    int x[100], t;
    char nomes[80];
    float salarios[30];

    for (t = 0; t < 100; t++) {
        x[t] = t + 1;
    }

    for (t = 0; t < 100; t++) {
        printf("\n%d", x[t]);
    }

    printf("\n");

}