#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 1;
    printf("Digite um valor para iniciar a repetição\n");
    scanf("%d", &num);
    while(num <=10){
        printf("%d\n", num);
        num++;
    }

    return 0;
}
