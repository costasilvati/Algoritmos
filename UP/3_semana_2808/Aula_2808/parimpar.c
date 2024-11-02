#include <stdio.h>
#include <stdlib.h>

int main(){
    int n1, n2;
    printf("Digite um numero\n");
    scanf("%d", &n1);
    printf("Digite um numero\n");
    scanf("%d", &n2);

    if(n1%2 == 0 && n2%2 ==0){
        printf("Os dois numeros sao pares");
    }else {
        if(n1%2 ==0){
            printf("O primeiro valor eh par");
        }
        if(n2%2 ==0){
            printf("O segundo valor eh par");
        }
    }

    return 0;
}

