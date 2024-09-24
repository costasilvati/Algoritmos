#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("Digite um numero positivo \n");
    scanf("%d", &num);

    if(num >= 0){
        printf("FOR \n  \n");
        for(int i=num; i>=0; i--){
            printf("%d - ", i);
        }

        printf("\n WHILE \n  \n");
        int i = num;
        while(i>=0){
            printf("%d - ", i);
            i--;
        }

        printf("\n DO WHILE \n  \n");
        i = num;
        do{
            printf("%d - ", i);
            i--;
        }while(i>=0);
    }else{
        printf("ERRO! O valor deve ser positivo!\n");
    }
    return 0;
}
