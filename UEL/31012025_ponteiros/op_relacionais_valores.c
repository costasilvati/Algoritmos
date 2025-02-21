#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p, *p1, x=10, y=20;
    printf("\n -- \n============ \n \n");
    p = &x;
    p1 = &y;
    if(*p > *p1){
        printf("\n p eh maior que p1 %d \t %d\n", *p, *p1);
    }else{
        printf("\n p eh menor que p1 %d \t %d\n", *p, *p1);
    }

    printf("\n -- \n============ \n \n");
    return 0;
}

