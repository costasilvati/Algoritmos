#include <stdio.h>
#include <stdlib.h>

int main()
{
    int digitado = 0, cont = 1;
    printf("Digite um valor positivo \n");
    scanf("%d", &digitado);
    while(cont <=digitado){
        cont++;
        printf("%d - ",cont);
    }
    if(digitado <=0){
        printf("O numero digitado deve ser maior que 0\n");
    }
    return 0;
}
