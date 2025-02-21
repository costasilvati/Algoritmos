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
    printf("Valor de count: %d \n", count);
    printf("Endereco de count %d", &count);
    printf("\n \n ---- \n");
    return 0;
}
