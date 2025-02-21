#include <stdio.h>
#include <stdlib.h>

int main()
{
    void *pv;
    int *ptr1, num = 2;
    ptr1 = &num;
    pv = ptr1;

    printf("\n \n -------- \n");

    printf("Valor do ponteiro void %d \n", *(int*)pv); // type cast
    //printf("Valor do ponteiro void %d \n", *pv); // ERRO
    printf("\n \n ---- \n");
    return 0;
}
