#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p;
    int count = 10;
    p = &count;
    printf("\n -- \n============ \n \n");
    printf("p: %d \t", p);
    printf("*p: %d \n \n", *p);
    // altera valor da varivel para qual p aponta
    *p = 12;
    printf("Ecount: %d \t, &count);
    printf("count: %d \n", count);
    printf("\n -- \n============ \n \n");
    return 0;
}

