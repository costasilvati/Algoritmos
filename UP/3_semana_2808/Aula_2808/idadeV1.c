#include <stdio.h>
#include <stdlib.h>

int main(){
    int idade;
    printf("Digite sua idade\n");
    scanf("%d", &idade);

    if(idade < 18){
        printf("Menor de idade \n");
    }else{
        if(idade < 65){
            printf("Maior de idade \n");
        }else{
            printf("Maior de 65 \n");
        }
    }
    return 0;
}

