#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p, *p1, x, y;
    printf("\n -- \n============ \n \n");
    p = &x;
    p1 = &y;
    if(p == p1){
        printf("\n Ponteiros sao iguais %p \t %p\n", *p, *p1);
    }else{
        printf("\n Ponteiros sao diferentes %p \t %p\n", *p, *p1);
    }

    printf("\n -- \n============ \n \n");
    return 0;
}

