#include <stdio.h>
#include <stdlib.h>

void parImpar(int num);//Protótipo da funcao

int main()
{
    int numero = 0;
    printf("Digite um numero\n");
    scanf("%d", &numero);
    parImpar(numero);
    return 0;
}

void parImpar(int num){
    if(num%2==0){
        printf("O numero eh PAR \n");
    }else{
        printf("O numero eh IMPAR \n");
    }
}
