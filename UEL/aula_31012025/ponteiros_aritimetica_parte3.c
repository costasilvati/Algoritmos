#include <stdio.h>
#include <stdlib.h>

int main()
{
    int count = 10;
    int *p;
    // Associar um endereco a p
    p = 0x5DC;
    printf("\n \n -------- \n");
    // valores iniciais
    printf("Hexadecimal p: %p \n", p);
    printf("Decimal p: %d \n\n", p);

    p++;// incremento
    // valores pos incremento
    printf("Hexadecimal p: %p \n", p);
    printf("Decimal p: %d \n\n", p);

    p = p + 15; // soma
    // valores pos soma
    printf("Hexadecimal p: %p \n", p);
    printf("Decimal p: %d \n\n", p);

    printf("\n \n ---- \n");
    return 0;
}
