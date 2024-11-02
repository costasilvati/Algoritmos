#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n1, n2;
    printf("Digite o valor 1 \n");
    scanf("%d", &n1);
    printf("Digite o valor 2 \n");
    scanf("%d", &n2);

    if(n1 == n2){
        printf("%d e %d sao iguais \n", n1, n2);
    }else{
        printf("%d e %d sao diferentes \n", n1, n2);
    }

    return 0;
}
