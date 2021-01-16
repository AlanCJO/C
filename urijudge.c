#include <stdio.h>

int main() 
{
    int cod, qnt;
    double price;
    scanf("%d%d", &cod, &qnt);

    switch (cod)
    {
        case 1:
            price = 4.00;
            break;
        case 2:
            price = 4.50;
            break;
        case 3:
            price = 5.00;
            break;
        case 4:
            price = 2.00;
            break;
        case 5:
            price = 1.50;
            break;        
    }
    printf("Total: R$ %.2f", price*qnt);

    printf("\n");
    return 0;
}



/* // URI 1035 - Teste de Seleção 1
#include <stdio.h>

int main() 
{
    int a, b, c, d;
    scanf("%d%d%d%d", &a, &b, &c, &d);

    if ((b>c && d>a) && (c+d > a+b) && (c > -1 && d > -1) && (a%2 == 0) ) {
        printf("Valores aceitos");
    } else {
        printf("Valores nao aceitos");
    }

    printf("\n");
    return 0;
}
*/

/* // URI 1009
#include <stdio.h>

int main() 
{
    char cName[20];
    double dSalary, dSales, dTotal, dDiscount;
    scanf("%s", cName); 
    scanf("%lf", &dSalary); 
    scanf("%lf", &dSales); 
    dDiscount = dSales * 15/100;
    dTotal = dDiscount + dSalary;

    printf("TOTAL = R$ %.2f", dTotal);

    printf("\n");
    return 0;
}
*/

/* // URI 1010 - Cálculo Simples
#include <stdio.h>
 
int main() {
 
    float a[3], b[3], mount1, mount2;
    
    scanf("%f%f%f", &a[0], &a[1], &a[2]);
    scanf("%f%f%f", &b[0], &b[1], &b[2]);

    printf("VALOR A PAGAR: R$ %.2f", a[1]*a[2] + b[1]*b[2]);   

    printf("\n");
    return 0;
}
*/