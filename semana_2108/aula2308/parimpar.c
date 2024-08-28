#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int num;
    printf("Digite um numero: \n");
    scanf("%d", &num);

    if(num%2 > 0){ // se tem resto da divisão por 2 eh impar
        printf("O numero %d eh impar \n", num);
    }else{
        printf("O numero %d eh par \n", num);
    }

    return 0;
}

