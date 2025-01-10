#include <stdio.h>
#include <stdlib.h>

int main()
{
    int option = 0;
    do{
        printf("Escolha uma opcao\n");
        printf("1 - Ficar aqui \n");
        printf("2 - Nao sair \n");
        printf("3 - Continuar \n");
        printf("0 - Sair\n");
        scanf("%d", &option);
        switch(option){
            case 1:
                printf("Ficar aqui! \n");
                break;
            case 2:
                printf("Nao sair \n");
                break;
            case 3:
                printf("Continuar \n");
                break;
            default:
                printf("Escolha 1, 2, 3 ou 0 para sair\n");
        }

    }while(option !=0);
    return 0;
}
