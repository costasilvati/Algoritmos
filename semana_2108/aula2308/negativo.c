#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int num;
    printf("Digite um numero \n");
    scanf("%d", &num);

    if(num < 0){
        printf("O valor %d eh negativo \n", num);
    }else{
        printf("O valor %d eh positivo \n", num);
    }

    return 0;
}

