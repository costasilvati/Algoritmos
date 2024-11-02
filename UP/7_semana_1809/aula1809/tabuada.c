#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, i = 0, result = 0;
    printf("Digite um numero e veja a tabuada\n");
    scanf("%d", &num);

    printf("WHILE \n \n");
    while(i <= 10){
        result = num * i;
        printf("%d x %d = %d \n", num, i, result);
        i++;
    }
    printf("DO WHILE \n \n");

    i=0; // zerar contador
    do{
        // repetição
        result = num * i;
        printf("%d x %d = %d \n", num, i, result);
        i++;

    }while(i <= 10);

    printf("FOR \n \n");

    for(int x=0; x<=10; x++){
        result = num * x;
        printf("%d x %d = %d \n", num, x, result);
    }


    return 0;
}
