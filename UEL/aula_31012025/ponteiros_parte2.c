#include <stdio.h>
#include <stdlib.h>

int main()
{
    int count = 10;
    int *p;
    // Associar um endereco a p
    p = &count;
    printf("\n \n ---- \n");

    printf("Valor de p: %d \n", p);
    printf("Valor no end. de p: %d \n\n", *p);

    printf("Valor em count: %d \n", count);
    printf("Endereco de count %d \n----\n", &count);

    *p = 29;

    printf("Valor em count: %d \n", count);
    printf("Endereco de count %d", &count);

    printf("\n---- \nValor de p: %d \n", p);
    printf("Valor no end. de p: %d \n\n", *p);

    printf("\n \n ---- \n");
    return 0;
}
