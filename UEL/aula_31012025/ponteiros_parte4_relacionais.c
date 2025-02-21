#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 10, b = 20, *ptr1, *ptr2;

    printf("\n \n -------- \n");

    ptr1 = &a;
    ptr2 = &b; // if FALSE
    // ptr2 = &a; // if TRUE

    if(ptr1 == ptr2){
        printf("Os ponteiros sao iguais \n");
    }else{
        printf("Os ponteiros nao sao iguais \n");
    }

    printf("\n \n ---- \n");
    return 0;
}
